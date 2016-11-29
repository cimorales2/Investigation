import numpy as np
import matplotlib.pyplot as plt
import os

muons = np.empty((0,1),object)
dates = np.empty((0,1),object)
for i in os.listdir(os.getcwd()):
    if i == 'get_Data': continue
    a = i.split('-')
    year = '%02d' % int(a[2][:4])
    day = '%02d' % int(a[1])
    month = '%02d' % int(a[0][4:])
    date = np.datetime64('{0}-{1}-{2}'.format(year,month,day))
    dates = np.append(dates,np.array([[date]]),axis=0)
    f = open(i)
    f = f.read()
    f = f.strip('\n').split('\n')
    f = f[6:]
    muon = 0
    for j in f:
        if 'Secondary' in j and 'muon' in j:
            muon += 1
    muons = np.append(muons,np.array([[muon]]),axis=0)
unified = np.hstack((dates,muons))
unified = unified[unified[:,0].argsort()]


plt.plot(range(1,len(muons)+1),unified[:,1],'k')
plt.xlabel('Dias despues de 01-01-2012')
plt.ylabel('Num. de Muones')
plt.show()
