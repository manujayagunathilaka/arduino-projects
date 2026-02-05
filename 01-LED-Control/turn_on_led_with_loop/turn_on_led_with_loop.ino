void setup() {
  // Set Pin 7 as an OUTPUT
  pinMode(7, OUTPUT);
}

void loop() {
  // Turn the LED ON
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1 second

  // Turn the LED OFF
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1 second
}