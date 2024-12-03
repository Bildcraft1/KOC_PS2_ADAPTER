#include <Arduino.h>
#include <Keyboard.h>

// Define the digital pins for buttons
const int buttonPins[] = {2, 3, 4, 5, 6, 7, 8};
const int numButtons = sizeof(buttonPins) / sizeof(buttonPins[0]);

const int turnTablePins[] = {12, 13};

// Define keyboard mapping for each button
const char buttonKeys[] = {
  'A', 'B', 'C', 'D', 'E', 'F', 'G'
};

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  delay(1000);
  
  // Configure pins as INPUT_PULLUP
  for (int i = 0; i < numButtons; i++) {
    Serial.print("Configuring pin ");
    Serial.print(buttonPins[i]);
    Serial.println(" as INPUT_PULLUP");
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  // Initialize Keyboard library
  Keyboard.begin();
}

void loop() {
  // Check the state of each button
  for (int i = 0; i < numButtons; i++) {
    Serial.print("Button ");
    Serial.print(i + 1);
    Serial.print(" state: ");
    Serial.println(digitalRead(buttonPins[i]));
    // Read the button state (LOW means pressed due to INPUT_PULLUP)
    if (digitalRead(buttonPins[i]) == LOW) {
      // Button is pressed
      Keyboard.press(buttonKeys[i]);
      
      // Optional: Print debug information
      Serial.print("Button ");
      Serial.print(i + 1);
      Serial.println(" pressed");
    } else {
      // Button is not pressed
      Keyboard.release(buttonKeys[i]);
    }
  }
  
  // Small delay to debounce
  delay(10);
}