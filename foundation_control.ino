#include <Servo.h>

const uint8_t VescOutputPin = 5;

const uint8_t PotentiometerPin = A0;
const uint8_t PotentiometerPinRear = A1;

Servo esc;

void setup() {
  Serial.begin(9600);
  esc.attach(VescOutputPin);

  esc.writeMicroseconds(1500);

}
int number = 0;
int diff = 0;
void loop() {
  diff = analogRead(PotentiometerPin) - analogRead(PotentiometerPinRear);
  Serial.print(map(analogRead(PotentiometerPin), 655 , 881, 1000, 2000));
  Serial.print("  ");
  Serial.print(analogRead(PotentiometerPin));
  Serial.print("  ");
  Serial.print(diff);
  Serial.print("  ");
  Serial.println(map(diff, -226, 226, 1000, 2000));
  if 
  esc.writeMicroseconds(map(analogRead(PotentiometerPin), 655 , 881, 1000, 2000));

}