import matplotlib.pyplot as plt
import numpy as np

f = open("both_scent.data",'r')
f = f.read().strip('\n')
data = f.split('\n')
for i in range(len(data)):
    data[i]=data[i].split(" ")

n1 = data[0][0]
n2 = data[1][0]

print n1,n2

del data[0]
del data[0]

seconds = [float(i) for i in zip(*data)[0]]
volts1 = [float(i) for i in zip(*data)[1]]
volts2 = [float(i) for i in zip(*data)[2]]

seconds = np.array(seconds)
volts1 = np.array(volts1)
volts2 = np.array(volts2)

plt.plot(seconds,volts1*(3.3/4095),label=n1)
plt.plot(seconds,volts2*(3.3/4095),label=n2)
plt.legend()
plt.show()
