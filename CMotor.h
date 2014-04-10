class CMotor {

private:
	int position;
public:
	void ResetMotor(); // moves motor to the starting position
	void MoveMotor(int distance); // Moves motor to the measurement position
	int CalculateDistance(int data[], int size); // determine the distance to move the motor
	int getPosition(); // get the current motor position
};

