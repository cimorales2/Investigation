import serial,time
import matplotlib.pyplot as plt
import numpy as np

arduino = serial.Serial('/dev/ttyACM0',115200)
time.sleep(2) #wait for serial to be ready

def lim_time(limit): #seg
    t0 = time.clock()
    if (time.clock() - t0)<limit: return True
    else: return False


g1 = np.empty((0))
g2 = np.empty((0))
n = True

t = 60
print "Time setted for " + str(t) +" s"
print "Please wait..."

coin = 0
while lim_time(t):
    data = arduino.readline()
    if data != '\n':
        data = data.strip('\n').split(" ")
        g1 = np.append(g1,int(data[0]))
        g2 = np.append(g2,int(data[1]))

arduino.close()
print "Done!"

m1 = g1.mean()
m2 = g2.mean()
s1 = g1.std()
s2 = g2.std()

for i in range(g1.size):
    if g1[i] >= m1+3*s1 and g2[i]>=m2+3*s2:
        coin +=1

print "Ground for:\nCH1 = {0}\nCH2 = {1}\nTotal of Coincidences = {2}".format(m1,m2,coin)


'''
plt.plot(np.arange(1,len(volts1)+1,1),volts1,'.-',label="a0")
plt.plot(np.arange(1,len(volts1)+1,1),volts2,'.-',label="a1")
plt.legend()
plt.show()
'''
