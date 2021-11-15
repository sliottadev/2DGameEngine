#include "PeRect.h"

PeRect::PeRect(){
	this->xPos = 0;
	this->yPos = 0;
	this->width = 0;
	this->height = 0;
}

PeRect::PeRect(int x, int y, int w, int h){
	this->xPos = x;
	this->yPos = y;
	this->width = w;
	this->height = h;
}

PeRect::PeRect(PePoint PntOrigin, PePoint size){
	this->xPos = PntOrigin.getXPos();
	this->yPos = PntOrigin.getYPos();
	this->width = size.getXPos();
	this->height = size.getYPos();
}

int PeRect::getXPos(){
	return this->xPos;
}

void PeRect::setXPos(int value){
	this->xPos = value;
}

int PeRect::getYPos(){
	return this->yPos;
}

void PeRect::setYPos(int value){
	this->yPos = value;
}

int PeRect::getWidth(){
	return this->width;
}

void PeRect::setWidth(int value){
	this->width = value;
}

int PeRect::getHeight(){
	return this->height;
}

void PeRect::setHeight(int value){
	this->height = value;
}

PePoint PeRect::getOrigin(){
	return PePoint(this->xPos, this->yPos);
}

void PeRect::setOrigin(PePoint value){
	this->xPos = value.getXPos();
	this->yPos = value.getYPos();
}

PePoint PeRect::getSize(){
	return PePoint(this->width, this->height);
}

void PeRect::setSize(PePoint value){
	this->width = value.getXPos();
	this->height = value.getYPos();
}

int PeRect::getArea()
{
	return this->getWidth() * this->getHeight();
}
