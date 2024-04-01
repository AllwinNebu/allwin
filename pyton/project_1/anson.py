from PIL import Image

def repair_image(file_path):
    try:
        with open(file_path, 'rb') as file:
            # Read the initial bytes (magic number)
            magic_number = file.read(4)

            # Check if it corresponds to a valid image format
            if magic_number == b'\xFF\xD8\xFF\xE0':  # Example for JPEG
                # Open the image using Pillow
                img = Image.open(file_path)

                # Perform any additional processing or corrections if needed

                # Save the corrected image
                img.save('repaired_image.jpg')

                print("Image repaired successfully.")
            else:
                print("Invalid or unrecognized image format.")
    except IOError as e:
        print(f"Error: {e}")

# Example usage
repair_image('anson.jpg')   