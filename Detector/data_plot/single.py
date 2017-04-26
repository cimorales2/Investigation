import matplotlib.pyplot as plt
import numpy as np

f = open("scent-06-MPPC1001.data",'r')
f = f.read().strip('\n')
data = f.split('\n')
for i in range(len(data)):
    data[i]=data[i].split(" ")

data[0] = ['57',data[0][1]]

seconds = [float(i) for i in zip(*data)[0]]
volts = [float(i) for i in zip(*data)[1]]

seconds = np.array(seconds)
volts = np.array(volts)

plt.plot(seconds,volts)
plt.show()
