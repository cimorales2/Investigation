import numpy as np
import os

path = os.getcwd()
print path

n=0
p=0
g=0
lat=90
alt=11300
sbboxlength = 100
sim=1000

#m-d-y
for i in range(2012,2016):#y
    for j in range(1,13):#m
        for z in range(1,29):#d
            f = open(path+'/setup.file','w')
            f.write(
            'returnNeutrons {0}\nreturnProtons {1}\nreturnGammas {2}\ndate {3}-{4}-{5}\nlatitude {6}\naltitude {7}\nsubboxLength {8}'.format(n,p,g,j,z,i,lat,alt,sbboxlength))
            f.close()
            os.system('./testMain setup.file {3} | grep muon  > /home/cristobalmr/Desktop/Investigation/outputdate/date{0}-{1}-{2}.dat'.format(j,z,i,sim))
            print z,j,i

print 'Done!'
