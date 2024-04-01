from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.asymmetric import rsa
from cryptography.hazmat.primitives import serialization

# Generate a new RSA private key
private_key = rsa.generate_private_key(
    public_exponent=65537,  # Commonly used public exponent value
    key_size=2048,  # Key size in bits
    backend=default_backend()
)

# Get the corresponding public key
public_key = private_key.public_key()

# Serialize and save the private key to a PEM file
with open("private_key.pem", "wb") as key_file:
    key_file.write(
        private_key.private_bytes(
            encoding=serialization.Encoding.PEM,
            format=serialization.PrivateFormat.TraditionalOpenSSL,
            encryption_algorithm=serialization.NoEncryption()
        )
    )

# Serialize and save the public key to a PEM file
with open("public_key.pem", "wb") as key_file:
    key_file.write(
        public_key.public_bytes(
            encoding=serialization.Encoding.PEM,
            format=serialization.PublicFormat.SubjectPublicKeyInfo
        )
    )
