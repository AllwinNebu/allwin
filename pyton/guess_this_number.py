import random
while 1>0:
    cho=input("type start to continue or anything else to exit : ")
    if cho =="start":
        top_range = input("Type your guess : ")

        if top_range.isdigit():
            top_range = int(top_range)
            if top_range <=0:
             print("type a number greather than 0 asshole")
             quit()
        else :
         print("you fucking donkey this is a number guess thing, type a number idiot")
         quit()  
        random_number=random.randint( 0,top_range)
        print(random_number)   
        if top_range == random_number :
            print("you lucky peice of shit")
        else :
            print("HA")    
    else:
        quit()    
