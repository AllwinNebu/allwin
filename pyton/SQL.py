import mysql.connector
mydb = mysql.connector.connect(
    host = "localhost",
    user = "root",
    password = "admin",
    database = "test"
)
def inputprogram():
    name = input("Enter Name \n")
    pn = input("Enter phone number \n")
    tk = input("Enter token number \n")
    mycursor = mydb.cursor()
    query = "INSERT INTO customerinfo (Name, PhoneNumber, TokenNumber) VALUES (%s, %s, %s);"
    values = (name, pn, tk)
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