import numpy as np
import os

path = '/home/cristobalmr/Desktop/Invest/cry_v1.7/test/'

n=0
p=0
g=0
lat=90
alt=0
sbboxlength = 100
sim=1000

#m-d-y
for i in range(2012,2016):#y
    for j in range(1,13):#m
        for z in range(1,29):#d
            f = open(path+'setup.file','w')
            f.write(
            'returnNeutrons {0}\nreturnProtons {1}\nreturnGammas {2}\n date {3}-{4}-{5}\n latitude {6}\n altitude {7}\nsubboxLength {8}'.format(n,p,g,j,z,i,lat,alt,sbboxlength))
            f.close()
            os.system('./testMain setup.file {3} | grep muon  > ~/Desktop/Invest/outputdate/date{0}-{1}-{2}.dat'.format(j,z,i,sim))
            print z,j,i

print 'Done!'
