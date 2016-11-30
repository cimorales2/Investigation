import numpy as np
import matplotlib.pyplot as plt
import os

e=np.array([])
a = len(os.listdir(os.getcwd()))
for filename in os.listdir(os.getcwd()):
    print a
    a -=1
    if filename == 'get_Data': continue
    try:  e = np.append(e, np.loadtxt(filename, dtype='str',usecols=(3,)))
    except: pass

e = np.array([float(z.split('=')[1]) for z in e])

n,bins,patches=plt.hist(e,bins=np.arange(min(e),max(e),100),color='k')
plt.xlim(0,30000)
plt.xlabel('ke')
plt.show()
print n.max()


#max 90deg ~ 38750
#max 0deg ~ 41664
#max -33def ~ 41664
