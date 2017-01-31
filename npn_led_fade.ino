/*
 * 2N3904 Transistor LED Fade
 */

const int transistorPin = 9;

void setup() {
  Serial.begin(9600);
  analogWrite(transistorPin, 0);
  Serial.println("Beginning LED fade in 5 seconds.");
  delay(5000);
}

void loop() {
  for (int x = 0; x <= 255; x++) {
    analogWrite(transistorPin, x);
    delay(50);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(transistorPin, x);
    delay(50);
  }
}
