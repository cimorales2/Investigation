int pulse = 44;

 
 void setup() {
  Serial.begin(9600);
  digitalWrite(pulse,LOW);
  pinMode(pulse, INPUT);

}

void loop() {
  int pinState = digitalRead(pulse);
 // Serial.println(pinState);
  if (pinState == HIGH) {
   Serial.println(analogRead(pulse));
    Serial.println("fin");
   }
  delay(1);
}
