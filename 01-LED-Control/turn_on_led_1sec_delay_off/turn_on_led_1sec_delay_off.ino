void setup() {
  // Set Pin 7 as an OUTPUT
  pinMode(7, OUTPUT);

  // Turn the LED ON
  digitalWrite(7, HIGH);
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);

  // Turn the LED OFF
  digitalWrite(7, LOW);
}

void loop() {
  // The code in setup runs once, loop is empty.
}