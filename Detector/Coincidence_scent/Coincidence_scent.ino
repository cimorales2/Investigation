int sc1 = A0;
int sc2 = A1;
int v1;
int v2;
int thresh = 1500;
int counter = 0;
int ms;
int mc1;

void setup() {
  Serial.begin(19200);
  analogReadResolution(12);
}

void loop() {
//ver si puede ser conteo doble exportar archivo para plotear 
// mc1 ve cuanto se demora un clock
  mc1 = micros();
  ms = millis();
  v1 = analogRead(sc1);
  v2 = analogRead(sc2);
  if (v1 >= thresh and v2 >=thresh) {
    if (voltage(v1,v2)) {
      Serial.print(ms);
      Serial.print(" ");
      Serial.print(counter);
      Serial.println();
    }
  }
  Serial.println( micros()-mc1);
}

// ver una distancia de error, muon puede llegar con menor valor
boolean voltage(int x1, int x2) {
  int d = abs(x1-x2);
  if (d <=10) {
    counter ++;
    return true;
  }
  return false;
}
 
