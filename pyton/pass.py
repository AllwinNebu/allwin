import random
import string
import tkinter as tk

def generate_password(length=12, include_upper=True, include_lower=True, include_digits=True, include_special=True):
    characters = ''
    if include_upper:
        characters += string.ascii_uppercase
    if include_lower:
        characters += string.ascii_lowercase
    if include_digits:
        characters += string.digits
    if include_special:
        characters += string.punctuation
    
    password = ''.join(random.choice(characters) for _ in range(length))
    return password

def generate_and_display_password():
    length = int(length_entry.get())
    include_upper = upper_var.get()
    include_lower = lower_var.get()
    include_digits = digits_var.get()
    include_special = special_var.get()
    
    password = generate_password(length, include_upper, include_lower, include_digits, include_special)
    password_label.config(text="Generated Password: " + password)

# GUI
root = tk.Tk()
root.title("Random Password Generator")

length_label = tk.Label(root, text="Password Length:")
length_label.grid(row=0, column=0)

length_entry = tk.Entry(root)
length_entry.grid(row=0, column=1)

upper_var = tk.BooleanVar()
upper_check = tk.Checkbutton(root, text="Include Uppercase", variable=upper_var)
upper_check.grid(row=1, column=0)

lower_var = tk.BooleanVar()
lower_check = tk.Checkbutton(root, text="Include Lowercase", variable=lower_var)
lower_check.grid(row=2, column=0)

digits_var = tk.BooleanVar()
digits_check = tk.Checkbutton(root, text="Include Digits", variable=digits_var)
digits_check.grid(row=3, column=0)

special_var = tk.BooleanVar()
special_check = tk.Checkbutton(root, text="Include Special Characters", variable=special_var)
special_check.grid(row=4, column=0)

generate_button = tk.Button(root, text="Generate Password", command=generate_and_display_password)
generate_button.grid(row=5, column=0, columnspan=2)

password_label = tk.Label(root, text="")
password_label.grid(row=6, column=0, columnspan=2)

root.mainloop()