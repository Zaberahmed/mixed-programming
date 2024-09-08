import random
num=random.randint(1,10)
for times in range(1,6):
    print("Take a guess: ")
    guess=int(input())
    if (guess>num):
        print("You're high.")
    elif(guess<num):
        print("You're low.")
    else:
        break
if(guess==num):
     print("You are right.You have done it in "+str(times)+" times.")
else:
     print("You are out of the game.")