import hashlib

def generate_file_hash(file_path, hash_algorithm='sha256'):
    """
    Generate a secure hash for a file using the specified hashing algorithm.
    
    :param file_path: The path to the file.
    :param hash_algorithm: The hashing algorithm to use (e.g., 'md5', 'sha1', 'sha256', etc.).
    :return: The hash value as a hexadecimal string.
    """
    # Open the file in binary mode
    with open(file_path, 'rb') as f:
        # Initialize the hasher with the specified algorithm
        hasher = hashlib.new(hash_algorithm)
        # Read the file in chunks to avoid loading large files into memory all at once
        while chunk := f.read(4096):
            hasher.update(chunk)
    # Return the hexadecimal representation of the hash
    return hasher.hexdigest()

# Example usage:
file_path = input("Enter the full path to the file: ")  # Prompt the user to enter the file path
hash_value = generate_file_hash(file_path)
print(f"The hash value of '{file_path}' is: {hash_value}")