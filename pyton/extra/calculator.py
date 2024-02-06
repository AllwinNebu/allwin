def multiplication(num1, num2):
    return num1 * num2

def addition(num1, num2):
    return num1 + num2

def subtraction(num1, num2):
    return num1 - num2

def division(num1, num2):
    return num1 / num2


while 1>0:
    value1=0
    value2=0

    print("enter what type of operation you want to do and to get out use not")
    cho = input()
    
    if cho!="not":
        print("enter the two number")
        value1 = int(input())
        value2 = int(input())

    if cho == "+":
        print(value1, "+", value2, "=", addition(value1, value2))
        

    elif cho== "-":
        print(value1, "-", value2, "=", subtraction(value1, value2))
    

    elif cho == "*":
        print(value1, "*", value2, "=", multiplication(value1, value2))
    

    elif cho == "/":
        print(value1, "/", value2, "=", division(value1, value2))
        
    elif cho==  "not":
        print("goodbye")
        break

    else:
        print("read the options ")
    