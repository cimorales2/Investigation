int t0,t1,t2,t3;
uint32_t status;
uint32_t coin;
boolean statusPin44, statusPin46, statusPin48;

void setup() {
  Serial.begin(115200);
  /*
    Pin 44 = PC19
    Pin 46 = PC17
    Pin 48 = PC13
  */
  PMC->PMC_PCER0 = PMC_PCER0_PID13;   // PIOC power ON
  coin=0;
}

void loop() {
  t0= millis();
  while (millis()-t0<10000) {
    //t0 = micros();
    status = PIOC->PIO_PDSR;
    //t1=micros();
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    //t2=micros();
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
    status = PIOC->PIO_PDSR;
    statusPin44 = status & (1 << 19);
    statusPin46 = status & (1 << 17);
    statusPin48 = status & (1 << 13);
    if (statusPin44&statusPin46&statusPin48) {coin++;}
   
  }

  Serial.println(coin);
  coin=0;
}
