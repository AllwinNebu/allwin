import socket
import tkinter as tk
from tkinter import messagebox
from tkinter import scrolledtext

def whois_lookup(domain: str):
    try:
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.connect(("whois.verisign-grs.com", 43))
        s.send(f"{domain}\r\n".encode())
        response = s.recv(4096).decode()
        s.close()
        return response
    except Exception as e:
        return str(e)

def lookup_and_display():
    domain_name = entry.get()
    if domain_name:
        result = whois_lookup(domain_name)
        result_text.config(state='normal')  # Enable editing of text widget
        result_text.delete('1.0', tk.END)   # Clear previous content
        result_text.insert(tk.END, result)   # Insert new result
        result_text.config(state='disabled') # Disable editing of text widget
    else:
        messagebox.showerror("Error", "Please enter a domain name.")

# Create GUI
root = tk.Tk()
root.title("WHOIS Lookup")

label = tk.Label(root, text="Enter the domain name:")
label.pack()

entry = tk.Entry(root)
entry.pack()

button = tk.Button(root, text="Lookup", command=lookup_and_display)
button.pack()

# Add scrollable text box
scrollbar = tk.Scrollbar(root)
scrollbar.pack(side=tk.RIGHT, fill=tk.Y)

result_text = scrolledtext.ScrolledText(root, wrap=tk.WORD, yscrollcommand=scrollbar.set)
result_text.pack(expand=True, fill='both')
scrollbar.config(command=result_text.yview)

root.mainloop()