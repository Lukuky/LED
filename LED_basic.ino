/*
  CONNECT DESCRIPTION
  anode to some pin (digital or analog)
  katode to GND
  for +5V logic you need to add resistor!
*/

int ledPin = 3; // LED name and relevant pin

void setup() {
  pinMode(ledPin, OUTPUT); // set led connected with pin and GND
}

void loop() {
  digitalWrite(ledPin, HIGH); // turn on LED
  //digitalWrite(ledPin, LOW); // turn off LED
}
