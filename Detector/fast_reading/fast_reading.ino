double g0,g1;
int ms;
//uint16_t buf[10000][2];


void setup() {
  SerialUSB.begin(115200);

 ADC->ADC_MR |= 0x80; // these lines set free running mode on adc 7 and adc 6 (pin A0 and A1 - see Due Pinout Diagram thread)
 ADC->ADC_CR=2;
 ADC->ADC_CHER=0xC0; // this is (1<<7) | (1<<6) for adc 7 and adc 6

//Ground(g0,g1); //take mean of "ground"
//Serial.print(g0);Serial.print("  ");Serial.println(g1);
}

void loop() {
  millis();
 //int t=micros();
 uint8_t data[10000];
 for(int i=0;i<5000;i++){                         //This number must be equal to the quantity of the array, then restart array (remember)
    while((ADC->ADC_ISR & 0xC0)!=0xC0);// wait for two conversions (pin A0[7]  and A1[6])
    data[2*i ]=ADC->ADC_CDR[7];              // read data on A0 pin
    data[2*i+1]=ADC->ADC_CDR[6];              // read data on A1 pin
   }
 //Serial.print('#');Serial.println(millis());
 //t=micros()-t;
 for(int i=0;i<5000;i++){
    SerialUSB.print(data[2*i]);SerialUSB.print(" "); SerialUSB.print(data[2*i+1]);SerialUSB.print('\n');
 }
//Serial.write( (uint8_t*)data,sizeof(data));
}

void Ground(double & param_g0, double & param_g1) {
  int a0,a1;
  int q0 = 0;
  int q1 = 0;
  int quant = 0;
  while (millis()<10000)  {
    while((ADC->ADC_ISR & 0xC0)!=0xC0);
    a0=ADC->ADC_CDR[7];              // read data on A0 pin
    a1=ADC->ADC_CDR[6];              // read data on A1 pin
    q0 = q0 + a0;
    q1 = q1 + a1;
    quant++;
  }
 param_g0 = q0/quant;
 param_g1 = q1/quant;
}
  

