set_point=21
draw=int(set_point/5)
print("Draw: ",draw)
for i in range(0,draw):
    print("Enter your move:")
    user=input()
    if (user>5):
        print("Invalid Move")
        continue
    else:
        comp=5-user
        print("The computer chooses"+comp)
        set_point=set_point-5
        print("Set points remaining: "+set_point)

count=i-1

if count%2==0: print("Computer Wins")
elif count%2==1: print("User Wins")
