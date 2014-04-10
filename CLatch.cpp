#include "CLatch.h"

bool CLatch::DoorOpen() {
	if (open)
		return true;
	else return false;
}

void CLatch::OpenDoor() {
	if (!open)
		open = true;
}

void CLatch::CloseDoor() {
	if (open)
		open = false;
}