def check_password_complexity(password):
  if len(password)<8:
     
    
password=input("Enter your password")
if check_password_complexity(password):
    print("Complex")
else:
    print("Not complex")