int r_pin = A0;
int r_pin2 = A1;
int v1;
int v2;
int ms;

void setup() {
  Serial.begin(19200);
  analogReadResolution(12);  
}

void loop() {
  ms = millis();
  v1 = Voltage(analogRead(r_pin));
  v2 = Voltage(analogRead(r_pin2));
  Serial.print(v1);
  Serial.print(" ");
  Serial.print(v2);
  Serial.println();
}

float Voltage(int aR) {
  return aR * (3.3 / 4095);
}

