/* LED Blink, Teensyduino Tutorial #1
   http://www.pjrc.com/teensy/tutorial.html

   This example code is in the public domain.
*/

// Teensy 2.0 has the LED on pin 11
// Teensy++ 2.0 has the LED on pin 6
// Teensy 3.x / Teensy LC have the LED on pin 13
short ledPin = 13;

// the setup() method runs once, when the sketch starts

void setup() {
  pinMode(20, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

// the loop() methor runs over and over again,
// as long as the board has power

void loop() {
  delay(1000);
  Serial.print("*dab*\n");
  if (digitalRead(20) == HIGH)
  {
    digitalWrite(ledPin, HIGH);   // set the LED on
  }
  else if (digitalRead(20) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}
