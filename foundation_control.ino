#include <Servo.h>

const uint8_t VescOutputPin = 5; //make sure to plug in power to the pwm as well as the signal to p5

const uint8_t PotentiometerPin = A0; //make sure to plug in power as well to pots
const uint8_t PotentiometerPinRear = A1; //pot = bend sensor

Servo esc;

void setup() {

  Serial.begin(9600);
  
  esc.attach(VescOutputPin);

  esc.writeMicroseconds(1500);

}
int number = 0;
int diff = 0;
float motorVoltage;
void loop() {
  motorVoltage = analogRead(A0) * (5.0/1023.0); //returns voltage outputting on the motor 

  diff = analogRead(PotentiometerPin) - analogRead(PotentiometerPinRear);
  //for testing, make sure to change actual vales
  Serial.print(map(analogRead(PotentiometerPin), 655 , 881, 1000, 2000)); // (potlowerlimit, potupperlimit, outputlowerlimit, outputupperlimit)
  Serial.print("  ");
  Serial.print(analogRead(PotentiometerPin));
  Serial.print("  ");
  Serial.print(diff);
  Serial.print("  ");
  Serial.println(map(diff, -226, 226, 1000, 2000));
  //actual esc stuff 
  esc.writeMicroseconds(map(analogRead(PotentiometerPin), 655 , 881, 1000, 2000));

}
