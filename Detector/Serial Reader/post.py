import numpy as np


dat = np.genfromtxt('serial.dat',comments="!",skip_footer=1)
dat = np.delete(dat,0,1)
coin = 0

P44 = (1<<19)
P46 = (1<<17)
Masktot = P44 | P46
coin = 0

for i in dat:
    for j in i:
        if np.bitwise_and(np.uint32(j),Masktot) == Masktot:
            coin +=1
print coin
