name=input("Enter the name ")
roll=input("Enter the roll number ")
phy=int(input("Enter the mark in physics "))
che=int(input("Enter the mark in che "))
tot=phy+che
avg=tot/2
print("################### MARK LIST ####################")
print("Name : ", name , "\n Roll number : " , roll , "\n Total mark : " , tot)
print("Average " , avg)
if avg>=90:
    print("A+")
elif avg>=80:
    print("B+")
elif avg>=70:
    print("C+")
elif avg>=60:
    print("D+")
else:
    print("no")

     