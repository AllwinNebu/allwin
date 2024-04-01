import os
import zipfile

def scan_zip_bomb(zip_file_path, max_extract_size, max_nested_levels):
    try:
        # Open the zip file
        with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
            # Extracted files count
            extracted_files = 0

            # Extract each file and check its size
            for file_info in zip_ref.infolist():
                # Check file size
                if file_info.file_size > max_extract_size:
                    print(f"WARNING: Potential zip bomb detected! File '{file_info.filename}' is larger than {max_extract_size} bytes.")
                    return True

                # Check nested levels
                nested_levels = file_info.filename.count(os.path.sep)
                if nested_levels > max_nested_levels:
                    print(f"WARNING: Potential zip bomb detected! File '{file_info.filename}' has nested levels ({nested_levels}) beyond the limit of {max_nested_levels}.")
                    return True

                extracted_files += 1

            print(f"Scanned {extracted_files} files from the zip. No zip bomb detected.")
            return False

    except zipfile.BadZipFile:
        print("Error: Provided file is not a valid zip file.")
        return False
    except Exception as e:
        print(f"An error occurred: {e}")
        return False

if __name__ == "__main__":
    # Path to the zip file you want to scan
    zip_file_path = "test.zip"
    # Maximum allowed size for extracted files (adjust according to your needs)
    max_extract_size = 1000000  # 1 MB
    # Maximum allowed nested directory levels
    max_nested_levels = 10

    # Perform the scan
    scan_zip_bomb(zip_file_path, max_extract_size, max_nested_levels)