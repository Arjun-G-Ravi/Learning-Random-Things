import random

''' 
lines= lines of numbers to be operated
dig= no of digits for all numbers
dig1= no of digits for number 1
dig2= no of digits for number 2
qns= no of questions to be printed

'''

def dig(digit):             #generates random integer with given digits.
    if digit==1:
        return(random.randint(2,9))
    if digit==2:
        return(random.randint(11,99))
    if digit==3:
        return(random.randint(101,999))
    if digit==4:
        return(random.randint(1001,9999))
    if digit==5:
        return(random.randint(10001,99999))
    if digit==6:
        return(random.randint(100001,999999))
    if digit==7:
        return(random.randint(1000001,9999999))
    if digit==8:
        return(random.randint(10000001,99999999))


def multiplication(qns,dig1,dig2):
    l=[]
    for i in range(0,qns):
        no1=dig(dig1)
        no2=dig(dig2)
        print(i+1,')',no1,"X",no2,"=")
        l.append([i+1,int(no1*no2)])
    print(l)

def division(qns,dig1,dig2):
    l=[]
    i=0
    while i<qns :
        no1=dig(dig1)
        no2=dig(dig2)
        if no1%no2==0:
            print(i+1,')',no1,"÷",no2,"=")
            l.append([i+1,int(no1/no2)])
            i=i+1
        else:
            pass
    print(l)
multiplication(20,2,3)        
        
        