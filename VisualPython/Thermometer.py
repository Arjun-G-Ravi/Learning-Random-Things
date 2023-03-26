import numpy as np
from vpython import *
from threading import Thread 
import numpy as np

cover1=cylinder(radius=1,length=10,color=color.white,opacity=.5,pos=vector(-3,-3,0),up=vector(-1,0,0))
bar1=cylinder(radius=.75,length=8,color=color.red,opacity=1,pos=vector(-3,-2,0),up=vector(-1,0,0))
ball1=sphere(radius=1.5,color=color.white,opacity=.5,pos=vector(-3,-3,0))

cover2=cylinder(radius=1,length=10,color=color.white,opacity=.5,pos=vector(3,-3,0),up=vector(-1,0,0))
bar2=cylinder(radius=.75,length=8,color=color.red,opacity=1,pos=vector(3,-2,0),up=vector(-1,0,0))
ball2=sphere(radius=1.5,color=color.white,opacity=.5,pos=vector(3,-3,0))


def Therm1():
    while True:
        
        for len1 in np.linspace(1,8,1000):

            bar1.length=len1
            rate(10)
        for len1 in np.linspace(8,1,1000):

            bar1.length=len1
            rate(10)
            
# Therm1()        

def Therm2():
    while True:
        
        for len2 in np.linspace(1,8,1000):
            bar2.length=len2
            rate(20)

        for len2 in np.linspace(8,1,1000):
            bar2.length=len2
            rate(20)
# Therm2() 
t1=Thread(target=Therm1)
t2=Thread(target=Therm2)

t1.daemon=True
t2.daemon=True

t1.start()
t2.start()
