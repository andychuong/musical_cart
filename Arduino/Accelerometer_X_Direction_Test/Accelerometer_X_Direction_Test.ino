// these constants describe the pins. They won't change:
const int xpin = A0;                  // x-axis of the accelerometer
const int ypin = A1;                  // y-axis
const int zpin = A2;                  // z-axis (only on 3-axis models)

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
  pinMode(13,OUTPUT);

  // Provide ground and power by using the analog inputs as normal digital pins.
  // This makes it possible to directly connect the breakout board to the
  // Arduino. If you use the normal 5V and GND pins on the Arduino,
  // you can remove these lines.
}

void loop() {
  // print the sensor values:
  Serial.print(analogRead(xpin));
  // print a tab between values:
  Serial.print("\t");
//  Serial.print(analogRead(ypin));
  // print a tab between values:
//  Serial.print("\t");
//  Serial.print(analogRead(zpin));
  Serial.println();
  // delay before next reading:
//  delay(100);

  if(analogRead(xpin) < 321 || analogRead(xpin) > 326){
    digitalWrite(13, HIGH);
    delay(500);
  }
  else if(analogRead(xpin) < 325 && analogRead(xpin) >322){
    digitalWrite(13, LOW);
    delay(500);
  }
}
