import numpy as np
import os

X,Y,Z,KE=np.empty((0,1),object),np.empty((0,1),object),np.empty((0,1),object),np.empty((0,1),object)
a = len(os.listdir(os.getcwd()))
for i in os.listdir(os.getcwd()):
    print a
    a -=1
    if i == 'get_Data': continue
    f = open(i)
    f = f.read()
    f = f.strip('\n').split('\n')
    f = f[6:]
    for j in f:
        j = j.split()
        x,y,z,ke = float(j[5]),float(j[6]),float(j[7]),float(j[3].split('=')[1])
        X = np.append(X,np.array([[x]]),axis=0)
        Y =np.append(Y,np.array([[y]]),axis=0)
        Z = np.append(Z,np.array([[z]]),axis=0)
        KE = np.append(KE,np.array([[ke]]),axis=0)

unified = np.hstack((X,Y,Z,KE))
np.savetxt('pos_ke.dat',unified)
