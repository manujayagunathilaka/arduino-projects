# Project 04: Dual LED Alternating Flasher 

This project demonstrates how to control two LEDs simultaneously to create an alternating blinking effect (like police lights).

### Project Description
In this project, we use two digital pins (Pin 7 and Pin 8) to control two LEDs. When Pin 7 is HIGH, Pin 8 is LOW, and vice versa. This creates a pattern where one LED turns on while the other turns off, switching every 500 milliseconds.

### Hardware Requirements
* **Arduino Board**
* **LEDs:** 2x (e.g., Red and Blue)
* **Jumper Wires**

### Wiring Instructions
* **LED 1 (Red):** Anode (+) to **Pin 7**, Cathode (-) to **GND**.
* **LED 2 (Blue):** Anode (+) to **Pin 8**, Cathode (-) to **GND**.

### Code Snippet
```cpp
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
```

## Key Takeaway
This project teaches how to manage multiple output pins at the same time and how to reduce the delay() time (500ms) to create faster animations.

