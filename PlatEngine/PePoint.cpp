#include "PePoint.h"
#include <string.h>

PePoint::PePoint(){
	this->xPos = 0;
	this->YPos = 0;
}

PePoint::PePoint(int xPos, int yPos) {
	this->xPos = xPos;
	this->YPos = yPos;
}

int PePoint::getXPos()
{
	return this->xPos;
}

void PePoint::setXPos(int value){
	this->xPos = value;
}

int PePoint::getYPos()
{
	return this->YPos;
}

void PePoint::setYPos(int value){
	this->YPos = value;
}

void PePoint::setPoint(int x, int y){
	this->xPos = x;
	this->YPos = y;
}

const char* PePoint::toString()
{
	const char *ret = "no imp";
	return ret;
}
