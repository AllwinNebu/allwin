import sys
import pyfiglet
import socket
from datetime import datetime
from concurrent.futures import ThreadPoolExecutor

def scan(port):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    socket.setdefaulttimeout(0.5)
    result = s.connect_ex((target, port))
    if result == 0:
        print("[*] Port {} is open ".format(port))
        print("Searching.......")
    s.close()

if __name__ == "__main__":
    banner = pyfiglet.figlet_format("PORT SCANNING")
    print(banner)
    target = input("Enter the IP: ")

    print("_" * 50)
    print("Scanning Target: " + target)
    print("Scanning target at: " + str(datetime.now()))
    print("_" * 50)

    try:
        with ThreadPoolExecutor(max_workers=1000) as executor:
            ports = range(1, 65536)
            executor.map(scan, ports)
    except KeyboardInterrupt:
        print("Exit")
        sys.exit()
    except socket.error:
        print("Host not responding")
        sys.exit()
