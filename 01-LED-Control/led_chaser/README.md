# Project 05: 8-LED Chaser Effect

This project demonstrates how to create a "Running LED" or "Chaser" effect using 8 separate digital pins.

### Project Description
In this project, we utilize 8 digital pins (from Pin 2 to Pin 9) to control 8 LEDs. The program turns on each LED one by one for 300 milliseconds before turning it off and moving to the next one. This creates a smooth chasing light animation.

### Hardware Requirements
* **Arduino Board** (Uno or Nano)
* **LEDs:** 8x (Any color)
* **Jumper Wires**
* **Breadboard**

### Wiring Instructions
* Connect the **Anode (+)** of each LED to pins **2, 3, 4, 5, 6, 7, 8, and 9** respectively.
* Connect all **Cathodes (-)** to the **GND** rail on the breadboard.



### Code Snippet

```cpp
void setup() {
  // Set all used pins as OUTPUT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // Chase from Pin 2 to Pin 9
  digitalWrite(2, HIGH); delay(300); digitalWrite(2, LOW);
  digitalWrite(3, HIGH); delay(300); digitalWrite(3, LOW);
  digitalWrite(4, HIGH); delay(300); digitalWrite(4, LOW);
  digitalWrite(5, HIGH); delay(300); digitalWrite(5, LOW);
  digitalWrite(6, HIGH); delay(300); digitalWrite(6, LOW);
  digitalWrite(7, HIGH); delay(300); digitalWrite(7, LOW);
  digitalWrite(8, HIGH); delay(300); digitalWrite(8, LOW);
  digitalWrite(9, HIGH); delay(300); digitalWrite(9, LOW);
}
```

## Key Takeaway
You learned how to manage a large number of output pins. To make this code even shorter in the future, you can learn about "For Loops" to handle repetitive tasks like `pinMode` and `digitalWrite`.
