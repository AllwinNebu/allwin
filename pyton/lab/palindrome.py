n=int(input("Enter the number : "))
temp=n
rev = 0
while temp>0:
    rem=temp%10
    rev=(rev*10)+rem
    temp=temp//10

if n==rev:
    print("palindrome")
else:
    print("Not palindrome")