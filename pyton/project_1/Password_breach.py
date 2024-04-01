import requests
import hashlib
import pyfiglet

def check_password_breached(password):
    sha1_hash = hashlib.sha1(password.encode('utf-8')).hexdigest().upper()
    prefix, suffix = sha1_hash[:5], sha1_hash[5:]
    url = f"https://api.pwnedpasswords.com/range/{prefix}"
    response = requests.get(url)
    if response.status_code == 200:
        hashes = (line.split(':') for line in response.text.splitlines())
        for h, count in hashes:
            if h == suffix:
                return f"Password breached! Found {count} times."
        return "Password not breached."
    else:
        return "Error: Unable to check password breach status."
    
banner = pyfiglet.figlet_format("PWNED")
print(banner)
password = input("Enter your password: ")
print(check_password_breached(password))