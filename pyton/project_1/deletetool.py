import os
import random

def secure_delete(file_path):
    try:
        # Open the file in write mode and overwrite its content with random data
        with open(file_path, "wb") as f:
            file_size = os.path.getsize(file_path)
            f.write(bytearray(random.getrandbits(8) for _ in range(file_size)))
        
        # Delete the file
        os.remove(file_path)
        print(f"File '{file_path}' securely deleted.")
    except Exception as e:
        print(f"Error securely deleting file '{file_path}': {e}")

# Example usage
file_path = "Output.mp3"
with open(file_path, "w") as f:
    f.write("This is a test file.")

secure_delete(file_path)
