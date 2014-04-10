#include "CMotor.h"

void CMotor::ResetMotor() {
	position = 0;
}

void CMotor::MoveMotor(int distance) {
	position += distance;
}

int CMotor::CalculateDistance(int data[], int size) {
	// calculate the average of the values in the data array
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += data[i];
	return sum / size;
}

int CMotor::getPosition() {
	return position;
}
