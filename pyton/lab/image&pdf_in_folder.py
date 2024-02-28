import os

def list_images_and_pdfs(directory):
  
    if not os.path.exists(directory):
        print(f"Directory '{directory}' does not exist.")
        return
    files = os.listdir(directory)
    image_extensions = ['.jpg', '.jpeg', '.png', '.gif', '.bmp','.raw','.HEIC','.HEIF']
    pdf_extensions = ['.pdf']

    image_files = [file for file in files if any(file.lower().endswith(ext) for ext in image_extensions)] #for extensions with lovercase
    image_files2 = [file for file in files if any(file.upper().endswith(ext) for ext in image_extensions)] #for extensions with uppercase(iphone image)
    pdf_files = [file for file in files if any(file.lower().endswith(ext) for ext in pdf_extensions)]

    print("Image files:")
    print('\n'.join(image_files) )

 
    print('\n'.join(image_files2))
    
    print("\nPDF files:")
    print('\n'.join(pdf_files))


directory = input("Enter the dirctory you want to check : ")
list_images_and_pdfs(directory)
