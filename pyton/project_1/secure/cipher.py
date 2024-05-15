original_text = input("Enter the text to encrypt: ")

encrypted_text = ""
decrypted_text = ""

for char in original_text:
    if char.isalpha() or char == ' ':
        if 'a' <= char <= 'g' or 'A' <= char <= 'G':
            encrypted_text += chr(ord(char) + 19)
            decrypted_text += char
        elif 'h' <= char <= 'z' or 'H' <= char <= 'Z':
            encrypted_text += chr(ord(char) - 7)
            decrypted_text += char
        elif char == ' ':
            encrypted_text += char
            decrypted_text += char
    else:
        continue

if encrypted_text == "":
    print("No hidden message!")
else:
    print("Original Text: %s" % original_text)
    print("Encrypted Text: %s" % encrypted_text)
    print("Decrypted Text: %s" % decrypted_text)
