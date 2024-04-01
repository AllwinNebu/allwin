import hashlib

def calculate_hash(input_data, hash_algorithm='sha256'):
    if hash_algorithm == 'md5':
        hasher = hashlib.md5()
    elif hash_algorithm == 'sha1':
        hasher = hashlib.sha1()
    elif hash_algorithm == 'sha256':
        hasher = hashlib.sha256()
    elif hash_algorithm == 'sha512':
        hasher = hashlib.sha512()
    else:
        raise ValueError("Unsupported hash algorithm")

    hasher.update(input_data.encode())

    hash_digest = hasher.hexdigest()
    return hash_digest
input_data = input("Enter the data to hash: ")
hash_algorithm = input("Choose the hash algorithm (md5, sha1, sha256, sha512): ")
hashed_data = calculate_hash(input_data, hash_algorithm)
print(f"Hashed data ({hash_algorithm}): {hashed_data}")