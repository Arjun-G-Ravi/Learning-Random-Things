from vpython import *
from threading import Thread
from time import sleep

def ballMotion():
    x,y,z=0,0,0
    dx,dy,dz=.1,.1,.1
    while True:      
        rate(50)
        ball.pos=vector(x,y,z) 
        x+=dx
        y+=dy
        z+=dz
        if (x+ballRadius>(length/2)-(thickness/2) or x-ballRadius<(-length/2)+(thickness/2)):
            dx*=-1
        if(y+ballRadius>(bredth/2)-(thickness/2) or y-ballRadius<(-bredth/2)+(thickness/2)):
            dy*=-1
        if(z+ballRadius>(height/2)-(thickness/2) or z-ballRadius<(-height/2)+(thickness/2)):
            dz*=-1
        
def ballColor():
    while True:
        ball.color=color.red
        sleep(.5)
        ball.color=color.green
        sleep(.5)
        ball.color=color.yellow
        sleep(.5)
        ball.color=color.blue
        sleep(.5)
        ball.color=color.white
        sleep(.5)
        ball.color=color.orange
        sleep(.5)
        ball.color=color.black
        sleep(.5)
        ball.color=color.cyan
        sleep(.5)
        ball.color=color.magenta
        sleep(.5)


#--------------------PARAMETERS
ballRadius=1     
ball=sphere(radius=ballRadius)
length=20
bredth=10
height=5
thickness=.1

#--------------------MAIN
ground=box(color=color.white,size=vector(length,thickness,height),pos=vector(0,-bredth/2,0))
ceiling=box(color=color.white,size=vector(length,thickness,height),pos=vector(0,bredth/2,0))
wallL=box(color=color.white,size=vector(thickness,bredth,height),pos=vector(-length/2,0,0))
wallR=box(color=color.white,size=vector(thickness,bredth,height),pos=vector(length/2,0,0))
wallB=box(color=color.white,size=vector(length,bredth,thickness),pos=vector(0,0,-height/2))
    
t2=Thread(target=ballColor)     #Threading
t3=Thread(target=ballMotion)
t2.daemon=True
t3.daemon=True
t2.start()
t3.start()
while True:
    pass