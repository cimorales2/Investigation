int r_pin[] = {A0,A1};
int v1;
int v2;
int ms,mc1;
int H = 0;

//genero un array, el orden es el "tiempo"
int data[100][2];

void setup() {  
  Serial.begin(9600);   
  //8-bits es mas rapido que 12. No necesito buena resolucion, sino rapidez
  analogReadResolution(8);  
}

void loop() {
  mc1 = micros();
  for (int i=0 ; i<2 ; i++) {
    data[H][i] = analogRead(r_pin[i]);
  }
  H++;
  if (H == 100) {
    H = 0;
    for (int i=0; i<100; i++) {
      Serial.print(data[i][0]);
      Serial.print(" ");
      Serial.print(data[i][1]);
      Serial.println();
     }
  }
  ms = micros() -mc1;
  //Serial.println(ms);
}


