class CSensor
{
private:
	int* currentData;
public:
	bool Calibrate(); // calibrates the sensor
	void ReadData(int data[]); // Reads the data from the sensor
	int* GetData(); // get the data read by the sensor
};