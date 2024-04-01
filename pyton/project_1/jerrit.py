import numpy as np
from math import gcd
from sympy import Matrix

# Define the alphabet and mapping to numbers
alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
letter_to_num = {letter: idx for idx, letter in enumerate(alphabet)}
num_to_letter = {idx: letter for idx, letter in enumerate(alphabet)}

def matrix_key(key):
    # Convert the key into a matrix
    key_size = int(len(key) ** 0.5)
    key_matrix = np.array([letter_to_num[letter] for letter in key]).reshape(key_size, key_size)
    return key_matrix

def matrix_inverse(key_matrix):
    # Calculate the inverse of the key matrix
    key_matrix = Matrix(key_matrix)
    try:
        inverse_matrix = key_matrix.inv_mod(26)
    except ValueError:
        # If the matrix is not invertible, return None
        return None
    return np.array(inverse_matrix).astype(int)

def prepare_text(text, key_size):
    # Pad the text with 'X' to make its length a multiple of the key size
    text = text.upper().replace(' ', '')
    while len(text) % key_size != 0:
        text += 'X'
    return text

def encrypt(text, key):
    key_matrix = matrix_key(key)
    key_size = len(key_matrix)
    text = prepare_text(text, key_size)
    encrypted_text = ''

    for i in range(0, len(text), key_size):
        chunk = np.array([letter_to_num[letter] for letter in text[i:i+key_size]]).reshape(key_size, 1)
        encrypted_chunk = np.dot(key_matrix, chunk) % 26
        encrypted_text += ''.join([num_to_letter[num[0] % 26] for num in encrypted_chunk])

    return encrypted_text

def decrypt(text, key):
    key_matrix = matrix_key(key)
    inverse_matrix = matrix_inverse(key_matrix)

    if inverse_matrix is None:
        return "Key is not invertible."

    key_size = len(key_matrix)
    decrypted_text = ''

    for i in range(0, len(text), key_size):
        chunk = np.array([letter_to_num[letter] for letter in text[i:i+key_size]]).reshape(key_size, 1)
        decrypted_chunk = np.dot(inverse_matrix, chunk) % 26
        decrypted_text += ''.join([num_to_letter[num[0] % 26] for num in decrypted_chunk])

    return decrypted_text

# Get key and text from user
key = input("Enter the key (e.g., GYBNQKURP, IT SHOULD BE PERFECT SQAURE WORD) : ").upper()
plaintext = input("Enter the plaintext: ").upper()

encrypted_text = encrypt(plaintext, key)
print('Encrypted:', encrypted_text)

decrypted_text = decrypt(encrypted_text, key)
print('Decrypted:', decrypted_text)
