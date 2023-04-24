const uint8_t PotentiometerPin = A0; //make sure to plug in power as well to pots
const uint8_t PotentiometerPinRear = A1; //pot = bend sensor

void loop(){
    int diff = analogRead(PotentiometerPin) - analogRead(PotentiometerPinRear); //upates potentiometere reading every iteration
}