from vpython import *   # Not really cool
import numpy as np

myLength=7
myThickness=.1
theta=np.pi/8
d_theta=.01

x=arrow(color=color.red,length=myLength,shaftwidth=myThickness,axis=vector(1,0,0))
y=arrow(color=color.green,length=myLength,shaftwidth=myThickness,axis=vector(0,1,0))
z=arrow(color=color.blue,length=myLength,shaftwidth=myThickness,axis=vector(0,0,1))
r=arrow(color=color.yellow,length=myLength,shaftwidth=myThickness,axis=vector(myLength*np.cos(theta),myLength*np.sin(theta),0))
r.axis=vector(myLength*np.cos(theta+d_theta),myLength*np.sin(theta+d_theta),0)


while True:
    rate(100)
    r.axis=vector(myLength*np.cos(theta),myLength*np.sin(theta),0)      # xy axis
    theta+=d_theta
    # print(r.axis.x)
    if r.axis.x +.11 > myLength:
        while  True:
            rate(100)
            r.axis=vector(myLength*np.cos(theta),0,myLength*np.sin(theta))        # xz axis
            theta+=d_theta
            if r.axis.z>-myLength and  r.axis.z< -myLength + .1:
                while True:
                    rate(100)
                    r.axis=vector(0,myLength*np.cos(theta),myLength*np.sin(theta))    # yz axis
                    theta+=d_theta
                    if r.axis.z<myLength and  r.axis.z> myLength - .1:
                        break
            # elif 
                # break


    
        


