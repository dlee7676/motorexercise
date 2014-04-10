#include "CSensor.h"

bool CSensor::Calibrate() {
	// perform calibration process and return true when complete
	return true;
}

void CSensor::ReadData(int data[]) {
	currentData = data;
}

int* CSensor::GetData() {
	return currentData;
}