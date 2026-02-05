# Project 03: Continuous LED Blinking

This project demonstrates how to make an LED blink continuously at a 1-second interval using the `loop()` function.

### Project Description
Unlike the previous project, the code here is placed inside the `loop()` function. This means the Arduino will turn the LED ON, wait for 1 second, turn it OFF, wait for another second, and then repeat the process indefinitely.

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
}

void loop() {
  // Turn the LED ON
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1 second

  // Turn the LED OFF
  digitalWrite(7, LOW);
  delay(1000); // Wait for 1 second
}
```

### Key Takeaway
* The `loop()` function runs over and over again. By using delay(), we can create a simple timing loop to automate hardware actions like blinking an LED.
