# Project 02: One-Second LED Pulse

This project turns an LED ON for exactly one second and then turns it OFF. It's a great way to understand the `delay()` function in Arduino.

### Project Description
In this sketch, the LED connected to Pin 7 turns on as soon as the Arduino starts. It stays on for 1000 milliseconds (1 second) and then turns off. Since the code is in the `setup()` function, it only runs once.

### Hardware Requirements
* **Arduino Board**
* **LED:** 1x
* **Jumper Wires**

### Wiring Instructions
* **LED Anode (+):** Connect to **Digital Pin 7**.
* **LED Cathode (-):** Connect to **GND**.



### Code Snippet
```cpp
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
```
### Key Takeaway
* The delay(1000); function stops the program execution for 1000ms. This is how we control the timing of hardware components.
