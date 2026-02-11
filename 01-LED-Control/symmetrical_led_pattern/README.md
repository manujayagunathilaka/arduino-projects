# Project 06: Symmetrical In-Out LED Scanner

This project creates a symmetrical light pattern where LEDs blink in pairs, moving from the outside towards the center and then back to the outside.

### Project Description
In this setup, we use 8 LEDs connected to Pins 2 through 9. The code is written to trigger two pins at once (e.g., 2 & 9, then 3 & 8). This creates a visual effect of the lights "meeting" in the middle and then "expanding" back out. It is a great exercise in understanding coordinated timing with multiple output pins.

### Hardware Requirements
* **Arduino Board** (Uno or Nano)
* **LEDs:** 8x
* **Jumper Wires**
* **Breadboard**

### Wiring Instructions
* Connect the **Anodes (+)** of the 8 LEDs to Digital Pins **2, 3, 4, 5, 6, 7, 8, and 9**.
* Connect all **Cathodes (-)** to the **GND** rail.



### Code Snippet
```cpp
void setup() {
  // Initialize all 8 pins as outputs
  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Outside to Inside
  digitalWrite(2, HIGH); digitalWrite(9, HIGH); delay(300);
  digitalWrite(2, LOW);  digitalWrite(9, LOW);

  digitalWrite(3, HIGH); digitalWrite(8, HIGH); delay(300);
  digitalWrite(3, LOW);  digitalWrite(8, LOW);

  digitalWrite(4, HIGH); digitalWrite(7, HIGH); delay(300);
  digitalWrite(4, LOW);  digitalWrite(7, LOW);

  digitalWrite(5, HIGH); digitalWrite(6, HIGH); delay(300);
  digitalWrite(5, LOW);  digitalWrite(6, LOW);

  // Inside to Outside
  digitalWrite(6, HIGH); digitalWrite(5, HIGH); delay(300);
  digitalWrite(6, LOW);  digitalWrite(5, LOW);

  digitalWrite(7, HIGH); digitalWrite(4, HIGH); delay(300);
  digitalWrite(7, LOW);  digitalWrite(4, LOW);

  digitalWrite(8, HIGH); digitalWrite(3, HIGH); delay(300);
  digitalWrite(8, LOW);  digitalWrite(3, LOW);
```

## Key Takeaway
Coordinating multiple pins simultaneously allows for more complex and visually appealing animations. You can change the `delay(300)` value to make the animation faster or slower.
  digitalWrite(9, HIGH); digitalWrite(2, HIGH); delay(300);
  digitalWrite(9, LOW);  digitalWrite(2, LOW);
}
