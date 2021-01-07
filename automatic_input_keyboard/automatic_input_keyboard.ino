// Digispark ATTINY85
// automatic_input_keyboard.ino
#include <DigiKeyboard.h>

#define KEY_DOWN  0x51
#define KEY_TAB   0x2B

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  or Pro

  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.sendKeyStroke(KEY_DOWN);   // Down Key
  DigiKeyboard.delay(1000);               // wait for a second
//  DigiKeyboard.print("input text");     // login ID
//  DigiKeyboard.sendKeyStroke(KEY_TAB);  // TAB Key
  DigiKeyboard.println("input text");     // login password
}

// the loop routine runs over and over again forever:
void loop() {
  DigiKeyboard.sendKeyStroke(0);

  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(1000);               // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(1000);               // wait for a second
}
