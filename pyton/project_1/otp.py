import tkinter as tk
from tkinter import messagebox
import pyotp
import random

# Generate a secret key for OTP generation
secret_key = pyotp.random_base32()

def generate_otp():
    totp = pyotp.TOTP(secret_key)
    otp_value.set(totp.now())

def verify_otp():
    otp = otp_entry.get()
    totp = pyotp.TOTP(secret_key)
    if totp.verify(otp):
        messagebox.showinfo("Success", "OTP verification successful!")
    else:
        messagebox.showerror("Error", "Invalid OTP!")

# Create OTP window
otp_window = tk.Tk()
otp_window.title("One Time Password")

otp_value = tk.StringVar()
otp_label = tk.Label(otp_window, textvariable=otp_value, font=('Helvetica', 24))
otp_label.pack()

# Create main authentication window
auth_window = tk.Tk()
auth_window.title("Two Factor Authentication")

otp_button = tk.Button(auth_window, text="Generate OTP", command=generate_otp)
otp_button.pack()

otp_label = tk.Label(auth_window, text="Enter OTP:")
otp_label.pack()

otp_entry = tk.Entry(auth_window)
otp_entry.pack()

verify_button = tk.Button(auth_window, text="Verify OTP", command=verify_otp)
verify_button.pack()

otp_window.mainloop()