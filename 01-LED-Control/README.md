# Project 01: Simple LED ON

A very basic project to turn on an LED using Arduino Digital Pin 7.

### Project Description
This project demonstrates how to set a specific digital pin as an output and provide power to an LED. In this example, we are using Digital Pin 7.

### Hardware Requirements
* **Arduino Board:** (Uno, Nano, or Mega)
* **LED:** 1x (Any color)
* **Jumper Wires**

### Wiring Instructions
* Connect the **Anode (+)** (longer leg) of the LED to **Digital Pin 7** on the Arduino.
* Connect the **Cathode (-)** (shorter leg) of the LED to any **GND** pin on the Arduino.

> **Note:** For long-term use, it is recommended to use a 220-ohm resistor with the LED to prevent damage, but for this quick basic test, the LED is connected directly.

### Code Snippet
```cpp
void setup() {
  // Set Pin 7 as an OUTPUT
  pinMode(7, OUTPUT);

  // Turn the LED ON
  digitalWrite(7, HIGH);
}

void loop() {
  // Nothing to repeat here
}
```

### How to Run

* Open your Arduino IDE.
* Copy and paste the code above into a new sketch.
* Connect your Arduino to your PC.
* Select your Board and Port from the Tools menu.
* Click Upload.
