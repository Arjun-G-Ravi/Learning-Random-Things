from vpython import *

orb=sphere(radius=5,color=vector(0,1,1))

r,g,b=0,1,1
dr,dg,db=.001,-.001,.001

while True:
    print("Flag 1")
    rate(100)
    r=r+dr
    g=g+dg
    b=b+db
    
    if r>1.5 or r<=0:
        dr*=-1
    if g>1.5 or g<=0:
        dg*=-1
    if b>1.5 or b<=0:
        db*=-1

    if r<=1:
        R=r
    else:
        R=1

    if g<=1:
        G=g
    else:
        G=1

    if b<=1:
        B=b
    else:
        B=1

    orb.color=vector(R,G,B)
    # print(R+G+B)

    
