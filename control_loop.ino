double kP = 0.84, kI = 0.001, kD = 0.1;
int cycleTime = 20; //I'm not sure what the cycle time of the ino is

double PID(int setPoint){
    if (motorVoltage >= 0 && motorVoltage <= 0.1) motorVoltage += 1;

    double error = setPoint - motorVoltage; //set point being where we want the motor voltage to be

    double proportional = error * kP; //proportional calculation
    double integral = (integral * 0.9) + (error * kI * cycleTime) * 0.1; //integral calculation
    derivative = kD * (error - oldError) / cycleTime; //derivative, unnecesary but here for completness sake

    double voltage = voltage + proportional + integral + derivative; 


    oldError = error; //update error

    // makes the lower limit -1 and upper 1, will have to adjust
    if(voltage < -1) {
      voltage = -1;
    } else if (voltage > 1) {
      voltage = 1;
    }

    return voltage;
}