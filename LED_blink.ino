/*
  CONNECT DESCRIPTION
  anode to some pin (digital or analog)
  katode to GND
  for +5V logic you need to add resistor!
*/

int ledPin = 3; // LED name and relevant pin
byte frequency = 1000; //freguency of blinking

void setup() {
  pinMode(ledPin, OUTPUT); // set led connected with pin and GND
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn on LED
  delay(frequency); // glowing pause
  digitalWrite(ledPin, LOW); // turn off LED
  delay(frequency); // not-glowing pause
  frequency -= 10;
}
