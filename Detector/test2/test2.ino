#include <DueTimer.h>

int t0,t1,t2,t3;
int count1,count2,coin;

void setup() {
  Serial.begin(115200);
  /*
    Pin 44 = PC19
    Pin 46 = PC17
  */
  PMC->PMC_PCER0 = PMC_PCER0_PID13;   // PIOC power ON
  coin=0;
  count1=0;
  count2=0;
  Timer3.attachInterrupt(timeISR).start(1000000);
}

void loop() {
  t0= millis();
  //t1=micros();
  uint32_t status = PIOC->PIO_PDSR;
  //t2=micros();
  //boolean statusPin44 = status & (1 << 19);
  //boolean statusPin46 = status & (1 << 17);
  if (status & (1 << 19)) {count1++;}
  if (status & (1 << 17)) {count2++;}
  if ((status & (1 << 19))&(status & (1 << 17))) {coin++;}
  //t3=micros();

}

void timeISR() {
  //Serial.print(t2-t1);Serial.print(" ");Serial.print(t3-t2);Serial.print(" ");Serial.println(t3-t1);
  Serial.print(count1);Serial.print(" ");Serial.print(count2);Serial.print(" ");Serial.println(coin);
  coin=0;
  count1=0;
  count2=0;
}

