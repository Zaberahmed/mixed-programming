import random
spam=[]
print("How many words do you want to input ?")
x=int(input())

for i in range(0,x):
    name=input()
    spam=spam+[name]

choice=random.randint(0,x-1)
print("The chosen word is : "+spam[choice])
    
print("The End.")