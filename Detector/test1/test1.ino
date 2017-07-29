int t0,t1;
int pos=0;
int BUFFSIZE = 1024;
uint32_t buff[1024];
int coin;

void setup() {
  Serial.begin(9600);
  /*
    Pin 44 = PC19
    Pin 46 = PC17
  */
  PMC->PMC_PCER0 = PMC_PCER0_PID13;   // PIOC power ON

}

void loop() {
  t0=micros();
  uint32_t status = PIOC->PIO_PDSR;
  buff[pos]=status;
  pos++;
  if (pos==1024){
    getVals();
    pos=0;
  }
  t1=micros();
 // Serial.println(t1-t0);
}

void getVals() {
  for (int i=0;i<BUFFSIZE;i++) {
      boolean statusPin44 = buff[i] & (1<<19);
      boolean statusPin46 = buff[i] & (1<<17);
      if (statusPin44 & statusPin46) {coin++;}
  }
  Serial.print("Coincidences: ");Serial.println(coin);
}

