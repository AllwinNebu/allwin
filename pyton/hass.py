from cryptography.fernet import Fernet
import sqlite3
import hashlib

# Generate a unique key for encryption
def generate_key():
    return Fernet.generate_key()

# Encrypt data
def encrypt_data(data, key):
    cipher_suite = Fernet(key)
    return cipher_suite.encrypt(data.encode())

# Decrypt data
def decrypt_data(encrypted_data, key):
    cipher_suite = Fernet(key)
    return cipher_suite.decrypt(encrypted_data).decode()

# Hash master password
def hash_password(password):
    return hashlib.sha256(password.encode()).hexdigest()

# Initialize database
def initialize_database():
    conn = sqlite3.connect('passwords.db')
    c = conn.cursor()
    c.execute('''CREATE TABLE IF NOT EXISTS passwords
                 (id INTEGER PRIMARY KEY, website TEXT, username TEXT, password TEXT)''')
    conn.commit()
    conn.close()

# Add password to database
def add_password(website, username, password, key):
    conn = sqlite3.connect('passwords.db')
    c = conn.cursor()
    encrypted_password = encrypt_data(password, key)
    c.execute("INSERT INTO passwords (website, username, password) VALUES (?, ?, ?)",
              (website, username, encrypted_password))
    conn.commit()
    conn.close()

# Retrieve password from database
def retrieve_password(website, key):
    conn = sqlite3.connect('passwords.db')
    c = conn.cursor()
    c.execute("SELECT password FROM passwords WHERE website=?", (website,))
    result = c.fetchone()
    conn.close()
    if result:
        return decrypt_data(result[0], key)
    else:
        return None

# Main program
def main():
    initialize_database()
    master_password = input("Enter master password: ")
    hashed_password = hash_password(master_password)
    key = generate_key()

    while True:
        print("\nPassword Manager Menu:")
        print("1. Add Password")
        print("2. Retrieve Password")
        print("3. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            website = input("Enter website: ")
            username = input("Enter username: ")
            password = input("Enter password: ")
            add_password(website, username, password, key)
            print("Password added successfully.")
        elif choice == "2":
            website = input("Enter website: ")
            password = retrieve_password(website, key)
            if password:
                print(f"Password for {website}: {password}")
            else:
                print("Password not found.")
        elif choice == "3":
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()
 