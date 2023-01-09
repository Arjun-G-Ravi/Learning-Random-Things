import numpy as np
from vpython import *
import datetime
import time

# Parmeters
clockRadius=5
clockThickness=.6

dt=.75
textHeight=.75
textDepth=.05

sphereRadius=.3
bigClockRadius=6

clockMarkLength=1
clockMarkWidth=.2   
clockMarkThickness=.05

hourArrowLength=2.5
minuteArrowLength=4.5
secondArrowLength=4.5
hourArrowThickness=.3 
minuteArrowThickness=.20
secondArrowThickness=.10

# Prgram starts
clockFace=cylinder(length=clockThickness,color=color.white,radius=clockRadius,axis=vector(0,0,1.1))
bigClockFace=cylinder(length=clockThickness,color=color.red,radius=bigClockRadius,axis=vector(0,0,1),pos=vector(0,0,-.001))
point=sphere(radius=sphereRadius,color=color.red,pos=vector(0,0,clockThickness))

for i in range(90,451,30):
    
    i=i*3.14/180
    
    clockMark=box(axis=vector(np.cos(i),np.sin(i),0),length=clockMarkLength,width=clockMarkThickness,height=clockMarkWidth,color=color.cyan,pos=vector((clockRadius-clockMarkLength/2)*np.cos(i),(clockRadius-clockMarkLength/2)*np.sin(i),clockThickness))
ct=0
for i in range(420,61,-30):
    ct+=1
    # i2=90
    i=i*3.14/180

    number=text(text=str(ct),depth=textDepth,height=textHeight,pos=vector((clockRadius-dt)*np.cos(i),(clockRadius-dt)*np.sin(i)-textHeight/2,clockThickness),align="center",color=color.red)

for i in range(90,451,6):
    
    i=i*3.14/180
    
    clockMark=box(axis=vector(np.cos(i),np.sin(i),0),length=clockMarkLength/2,width=clockMarkThickness/2,height=clockMarkWidth/2,color=color.cyan,pos=vector((clockRadius-clockMarkLength/4)*np.cos(i),(clockRadius-clockMarkLength/4)*np.sin(i),clockThickness))

while True:
    second=datetime.datetime.now().second
    minute=datetime.datetime.now().minute
    minute+=second/60
    hour=datetime.datetime.now().hour
    hour+=minute/60

    hour=hour*-3.14/6 +1.57
    minute=minute*-3.14/30+1.57
    second=second*-3.14/30+1.57

    hourHand=arrow(length=hourArrowLength,pos=vector(0,0,clockThickness),color=color.blue,shaftwidth=hourArrowThickness,axis=vector(np.cos(hour),np.sin(hour),0))
    minuteHand=arrow(length=minuteArrowLength,pos=vector(0,0,clockThickness),color=color.blue,shaftwidth=minuteArrowThickness,axis=vector(np.cos(minute),np.sin(minute),0))
    secondHand=arrow(length=secondArrowLength,pos=vector(0,0,clockThickness),color=color.blue,shaftwidth=secondArrowThickness,axis=vector(np.cos(second),np.sin(second),0))
    time.sleep(1)

    secondHand.visible=False 
    hourHand.visible=False    
    minuteHand.visible=False       
