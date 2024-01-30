import mysql.connector
mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    password = "myballs",
    database = "big large balls"
)
def inputprogram():
    name = input("Enter Name \n")
    pn = input("Enter phone number \n")
    mycursor = mydb.cursor()
    query = "INSERT INTO huge_balls (Name, phoneno) VALUES (%s, %s);"
    values = (name, pn)
    mycursor.execute(query, values)
    mydb.commit()

def outputprogram():
    key = int(input("Enter your Token number \n"))
    mycursor = mydb.cursor()
    query = f"select Name, PhoneNumber, TokenNumber from customerinfo where TokenNumber = {key};"
    mycursor.execute(query)
    result = mycursor.fetchall()
    for row in result:
        print("Name : " +row[0])
        print("Phone number : " + row[1])
        print("Token number : " + str(row[2]) + "\n")
        
def deleteprogram():
    key = int(input("Enter your Token number \n"))
    mycursor = mydb.cursor()
    query = f"DELETE FROM customerinfo WHERE TokenNumber = {key}"
    mycursor.execute(query)
    mydb.commit()        

key = 1

while key > 0 :
    x = input("Choose whether input or output or delete \n")

    if x == "output":
        outputprogram()

    elif x == "input":
        inputprogram()

    elif x =="delete":
        deleteprogram()

    else :
        break