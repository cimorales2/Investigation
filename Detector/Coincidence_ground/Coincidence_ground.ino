int sc1 = A0;
int sc2 = A1;
int v1;
int v2;
int thresh = 1500;
int counter = 0;
int ms;
int mc1;
int g1,g2;
int c1 = 0;
int c2 = 0;


void setup() {
  Serial.begin(19200);
  analogReadResolution(12);
}

void loop() {
  mc1 = micros();
  ms = millis();
  v1 = analogRead(sc1);
  v2 = analogRead(sc2);
  if (ms<60000) {
     g1 += v1;
     g2 += v2;
     c1 ++;
     c2 ++;
  } else {
    if (ms == 60) {
      g1 = g1/c1;
      g2 = g2/c2;
    }
    if (v1 >= thresh and v2 >=thresh) {
      if (voltage(v1,v2)) {
        Serial.print(ms);
        Serial.print(" ");
        Serial.print(counter);
        Serial.println();
      }
    }
  }
  Serial.println(micros()-mc1);
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


