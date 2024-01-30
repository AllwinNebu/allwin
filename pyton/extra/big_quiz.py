print("WELCOME TO WORLD'S BIGGEST QUIZ GAME")
print("SERIOUS QUESTIONS ONLY SO PEOPLE WITH BIG BRAIN ONLY ATTEND")

playtime= input("Dare to play the quiz?  ")

point = 0

if playtime.lower() != "yes":
    quit()

print("POVER! Let's play HELL YEA")    


ans= input("Is Earth flat ?  ")

if ans.lower() == "no":
    print("correct")
    point = point+1
else:
    print("Go and die you don't have brain")  


ans= input("Does ocean have water ?  ")

if ans.lower() == "no":
    print("correct")
    point = point+1
else:
    print("Go and die you don't have brain") 


ans= input("Is the land on land or on ocean?  ")

if ans.lower() == "land":
    print("correct")
    point = point+1
else:
    print("Go and die you don't have brain")


ans= input("Is there alien ?  ")

if ans.lower() == "yes":
    print("correct")
    point = point+1
else:
    print("Go and die you don't have brain")

print("Losers your score is : "+ str(point))
