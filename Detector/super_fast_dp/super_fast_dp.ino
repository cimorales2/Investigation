#define T(stmt) stmt; stmt; stmt; stmt; stmt; stmt; stmt; stmt; stmt; stmt;

uint32_t t0,t1;
uint32_t MaskPin44 = (1 << 19);
uint32_t MaskPin46 = (1 << 17);
uint32_t MaskTOT = MaskPin44 | MaskPin46;
uint32_t coin=0;
uint32_t ind,A[20000];

void setup() {
  PMC->PMC_PCER0 = PMC_PCER0_PID13;
  Serial.begin(115200);
  while(!Serial){}
    
}

void loop() {
  ind = 0;
  int32_t timestamp;
  const uint32_t SCC = SystemCoreClock;
  
  A[ind] = PIOC->PIO_PDSR;
  timestamp = SysTick->VAL;
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  timestamp -= SysTick->VAL ;
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(T(A[ind++] = PIOC->PIO_PDSR)))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(T(A[ind++] = PIOC->PIO_PDSR))
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  T(A[ind++] = PIOC->PIO_PDSR)
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  A[ind++] = PIOC->PIO_PDSR;
  timestamp = (timestamp < 0) ? timestamp + SCC - 2 : timestamp - 2;
  
  Serial.print('#');Serial.print(timestamp);Serial.print(" ");
  for(int i=0; i<20000; i++){
    Serial.print(A[i]);Serial.print(" ");
  }
  Serial.println();
}


