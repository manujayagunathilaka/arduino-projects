void setup() {
  // Initialize digital pins 7 and 8 as outputs
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // LED 1 ON, LED 2 OFF
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(500); // Wait for 0.5 seconds

  // LED 1 OFF, LED 2 ON
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(500); // Wait for 0.5 seconds
}