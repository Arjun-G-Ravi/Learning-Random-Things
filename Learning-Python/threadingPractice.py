from threading import Thread
from time import sleep

def count():
    i=0
    while True:
        print(i)
        i+=1
        # sleep(2)

def music():
    while True:
        print("               SAA")
        # sleep(4)
        print("               REE")
        # sleep(4)
        print("               GAA")
        # sleep(4)
        print("               MAA")
        # sleep(4)

t1=Thread(target=music)
t2=Thread(target=count)

   

t1.daemon=True
t2.daemon=True
t1.start()
t2.start()
while True:
    pass