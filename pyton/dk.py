from cryptography.fernet import Fernet

class TextFileEncryptorDecryptor:
    def __init__(self, key=None):
        if key:
            self.key = key
        else:
            self.key = Fernet.generate_key()

    def generate_key(self):
        return self.key

    def encrypt_file(self, input_file, output_file):
        with open(input_file, 'rb') as f:
            data = f.read()

        cipher = Fernet(self.key)
        encrypted_data = cipher.encrypt(data)

        with open(output_file, 'wb') as f:
            f.write(encrypted_data)

    def decrypt_file(self, input_file, output_file):
        with open(input_file, 'rb') as f:
            encrypted_data = f.read()

        cipher = Fernet(self.key)
        decrypted_data = cipher.decrypt(encrypted_data)

        with open(output_file, 'wb') as f:
            f.write(decrypted_data)

def main():
    encryptor_decryptor = TextFileEncryptorDecryptor()

    # Generate encryption key
    encryption_key = encryptor_decryptor.generate_key()
    print("Encryption Key:", encryption_key)

    # Encrypt file
    input_file = 'input.txt'
    encrypted_file = 'encrypted.txt'
    encryptor_decryptor.encrypt_file(input_file, encrypted_file)
    print("File encrypted successfully.")

    # Decrypt file
    decrypted_file = 'decrypted.txt'
    encryptor_decryptor.decrypt_file(encrypted_file, decrypted_file)
    print("File decrypted successfully.")

if __name__ == "__main__":
    main()
