
void setup() {
  
  pinMode(1, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
}

void loop() {

if (digitalRead(7) == 0 && digitalRead(11) == 1) {
  digitalWrite(1, 1);
  digitalWrite(13, 0);
  delay(1000);

}

else if (digitalRead(7) == 1 && digitalRead(11) == 0) {

  digitalWrite(1, 0);
  digitalWrite(13, 1);
  delay(1000);
}

else if (digitalRead(7) == 0 && digitalRead(1) == 0) {

  digitalWrite(1, 1);
  digitalWrite(13, 0);
  delay(2000);
  
  digitalWrite(1, 0);
  digitalWrite(13, 1);
  delay(2000);
}

else { 

  digitalWrite(1, 0);
  digitalWrite(13, 0);
  delay(1000);
}
}
