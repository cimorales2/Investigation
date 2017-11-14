#define T(stmt) stmt; stmt; stmt; stmt; stmt; stmt; stmt; stmt; stmt; stmt;
const uint32_t MaskPin44 = (1<<19);
const uint32_t MaskPin46 = (1<<17);
const uint32_t Masktot = MaskPin44 | MaskPin46;
uint32_t coin;
/*
int t0;
uint32_t t1,t2;
*/


void setup() {
  //t2=0;
  Serial.begin(115200);
  PMC->PMC_PCER0 = PMC_PCER0_PID13; // PIOC power ON
  coin = 0;
  while(!Serial){}
}

void loop() {
  //int32_t timestamp;
  //const uint32_t SCC = SystemCoreClock;
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  T(T(T(if ((PIOC->PIO_PDSR & Masktot) == Masktot) {coin++;})))
  
  //timestamp = SysTick->VAL;
  Serial.println(coin);//timestamp -= SysTick->VAL;Serial.print(" ");Serial.println( (timestamp<0) ? timestamp + SCC -2 : timestamp-2 );
}
