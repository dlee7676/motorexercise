#include "CSensor.h"
#include "CMotor.h"
#include "CLatch.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	int data[] = {100, 101, 105, 110, 210, 100, 102, 110, 150, 100};
	CSensor sensor;
	CMotor motor;
	CLatch latch;

	// set the values of the latch and motor, and calibrate the sensor
	latch.CloseDoor();
	motor.ResetMotor();
	// send an error message if calibration does not return true
	if(!sensor.Calibrate()) {
		cerr << "Calibration failed.";
		return -1;
	}
	// read the data
	sensor.ReadData(data);
	// move the motor to the appropriate position if the door is not open
	if (!latch.DoorOpen())
		motor.MoveMotor(motor.CalculateDistance(sensor.GetData(), 10));
	cout << "Current motor position: " << motor.getPosition();
	
	return 0;
}