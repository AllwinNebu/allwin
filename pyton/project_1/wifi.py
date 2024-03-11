import sys
import pyfiglet
import socket
from datetime import datetime

banner = pyfiglet.figlet_format("PORT SCANNER")
print(banner)
target = input("Enter the ip : ")

print("_" * 50)
print("Scanning Target : " + target)
print("Sacnning target at: " + str(datetime.now()))
print("_" * 50)
try:
        for port in range(1,65535):
                s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
                socket.setdefaulttimeout(0.5)
                result =s.connect_ex((target,port))
                
                if result ==0:
                        print("[*] Port {} is open".format(port))
                        print("Waiting.....")
                s.close()
except KeyboardInterrupt :
        print ("exit")
        sys.close()
except socket.error:
        print("host not responding")
        sys.exit()