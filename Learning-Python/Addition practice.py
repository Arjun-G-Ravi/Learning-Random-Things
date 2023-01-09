from random import *
from time import *
score=0
TT=0
l=[]
print()
n=int(input("Enter the number of questions: "))
for i in range(n):
    print()
    #print()
    a=randint(2,9)  # Digit od first number
    b=randint(2,9)  # Digit of second number
    ans=a+b         # The operation
    print(i+1,")",a,"+",b,"=",end=" ")
    t1=time()
    c=input()
    t2=time()
    try:
        c=int(c)
    except:
        c=int(-1561163152)
    if c==ans:
        score+=1
    else:
        l.append(i+1)
    T=t2-t1
    TT+=T

print()
print("SCORE:",score,"/",n)
print("PERCENTAGE:",score*100/n)
print("AVG TIME:",round(TT/n,2),"s")
print("Wrong Answers",l)
print()