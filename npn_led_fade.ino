/*
 * 2N3904 Transistor LED Fade
 */

const int transistorPin = 9;

void setup() {
  analogWrite(transistorPin, 0);
  
  Serial.begin(9600);
  Serial.println("Beginning LED fade in 5 seconds.");
  
  delay(5000);
}

void loop() {
  // Ramp up to maximum
  for (int x = 0; x <= 255; x++) {
    analogWrite(transistorPin, x);
    delay(50);
  }
  // Ramp down to minimum
  for (int x = 255; x >= 0; x--) {
    analogWrite(transistorPin, x);
    delay(50);
  }
}
