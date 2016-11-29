import numpy as np
import matplotlib.pyplot as plt
import os


X,Y,Z,KE=np.array([]),np.array([]),np.array([]),np.array([])
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
        if 'Secondary' in j and 'muon' in j:
            j = j.split()
            x,y,z,ke = float(j[5]),float(j[6]),float(j[7]),float(j[3].split('=')[1])
            X = np.append(X,x)
            Y = np.append(Y,y)
            Z = np.append(Z,z)
            KE = np.append(KE,ke)



plt.hist(KE,bins=np.arange(min(KE),max(KE),10))
plt.show()
