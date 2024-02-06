import hashlib
n=str(input("Entere the string: "))
result = hashlib.md5(n.encode())
print("The  equivalent of hash is : ", end ="")
print(result.digest())