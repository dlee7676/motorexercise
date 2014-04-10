/* This class implements the finite state machine for the door; it can either be in the open or closed state,
and the OpenDoor and CloseDoor methods will change the machine from one state to the other.  If the door is 
already in the open or closed state when one of the methods is called, it will stay in the same state. */

class CLatch {

private:
	bool open;

public:
	bool DoorOpen(); // check if the door is open
	void OpenDoor(); // set door to open
	void CloseDoor(); // set door to close
};