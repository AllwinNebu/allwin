import os

def search_deleted_files(directory):
    deleted_files = []

    for root, dirs, files in os.walk(directory):
        for file in files:
            file_path = os.path.join(root, file)
            if not os.path.exists(file_path):
                deleted_files.append(file_path)

    return deleted_files


directory_to_search = "D:\check"
deleted_files = search_deleted_files(directory_to_search)

if deleted_files:
    print("Deleted files found:")
    for file in deleted_files:
        print(file)
else:
    print("No deleted files found.")
