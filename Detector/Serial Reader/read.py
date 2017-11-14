import numpy as np
import serial
import time
from threading import Thread

global t0, dat0

def base_time():
    global t0
    t0 = time.time()

def base_dat():
    global dat0
    dat0 = ser.read(32)

def read_port(dat0):
    #dat = float(ser.read(32))-dat0
    dat = ser.read(32)
    dat = dat.strip("\n")
    dat = dat.split("\n")

    print dat[1].strip('\r').strip("\n"),

def ob_time(t0):
    t1 = time.time()-t0
    print str(t1).strip("\n"),

ser = serial.Serial('/dev/ttyACM0')
ser.baudrate = 115200
print
print("Port at: " + ser.name)
print('Wait...')
#while not(ser.is_open): pass

t = 15 #s
print('Time set to {} second(s)\n'.format(t))

while True:
    thrd1 = Thread(target=base_time).start()
    thrd2 = Thread(target=base_dat).start()
    while (time.time()-t0)<t: pass
    thread1 = Thread(target=read_port, args=(dat0, )).start()
    thread2 = Thread(target=ob_time, args=(t0, )).start()
    print("\n")
