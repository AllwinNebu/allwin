import random
import string

def caesar_encrypt(message, key):
    shift = key % 26
    cipher = str.maketrans(string.ascii_lowercase, string.ascii_lowercase[shift:] + string.ascii_lowercase[:shift])
    encrypted_message = message.lower().translate(cipher)
    return encrypted_message

def caesar_decrypt(encrypted_message, key):
    shift = 26 - (key % 26)
    cipher = str.maketrans(string.ascii_lowercase, string.ascii_lowercase[shift:] + string.ascii_lowercase[:shift])
    decrypted_message = encrypted_message.translate(cipher)
    return decrypted_message

def main():
    message = input("Enter the message: ")
    cho = int(input("Enter how you want to create the key:\n1. Enter by you\n2. Create random number (Can't be decrypted)\n"))

    if cho == 1:
        key = int(input("Enter the key: "))
        encrypted_message = caesar_encrypt(message, key)
        print(f'Encrypted message: {encrypted_message}')
        decrypted_message = caesar_decrypt(encrypted_message, key)
        print(f'Decrypted message: {decrypted_message}')
    else:
        key = random.randint(1, 1000000000005)  
        
        encrypted_message = caesar_encrypt(message, key)
        print(f'Encrypted message: {encrypted_message}')
        decrypted_message = caesar_decrypt(encrypted_message, key)
        print(f'Decrypted message: {decrypted_message}')

if __name__ == "__main__":
    main()
