from vpython import *
import numpy as np

myLength=7
myThickness=.1
theta=np.pi/24
d_theta=.01

x=arrow(color=color.red,length=myLength,shaftwidth=myThickness,axis=vector(1,0,0))
y=arrow(color=color.green,length=myLength,shaftwidth=myThickness,axis=vector(0,1,0))
z=arrow(color=color.blue,length=myLength,shaftwidth=myThickness,axis=vector(0,0,1))
r=arrow(color=color.yellow,length=myLength,shaftwidth=myThickness,axis=vector(myLength*np.cos(theta),myLength*np.sin(theta),0))
r.axis=vector(myLength*np.cos(theta+d_theta),myLength*np.sin(theta+d_theta),0)


while True:
    
  
    rate(100)
    if theta < 2*np.pi and theta >=0:
        r.axis=vector(myLength*np.cos(theta),myLength*np.sin(theta),0)
        theta+=d_theta
        # print(theta)
    else:
        d_theta*=-1
        theta+=d_theta*2
        continue
        


