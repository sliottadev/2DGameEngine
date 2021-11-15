#include "PeShape.h"

PeShape::PeShape(long id, PeShapeType type)
	:PeObject(id, Utils::intToCharArr(id), PeObjectType::PEO_SIMPLE_SHAPE, 0,0){
	this->type = &type;
	this->color = new PeColor(255,255,255,0);
	this->thickness = 1;
	this->width = 5;
	this->height = 5;
	this->filled = false;
}

PeShape::PeShape(long id, char* name, PeShapeType type, PeRect* rect)
	:PeObject(id, name, PeObjectType::PEO_SIMPLE_SHAPE, rect->getXPos(), rect->getYPos()){
	this->type = &type;
	this->color = new PeColor(255, 255, 255, 0);
	this->thickness = 1;
	this->width = rect->getWidth();
	this->height = rect->getHeight();
	this->filled = false;
}

PeShapeType* PeShape::getType(){
	return this->type;
}

void PeShape::setType(PeShapeType* value){
	this->type = value;
}

PeColor* PeShape::getColor(){
	return this->color;
}

void PeShape::setColor(PeColor* value){
	this->color = value;
}

int PeShape::getThickness(){
	return this->thickness;
}

void PeShape::setThickness(int value){
	this->thickness = value;
}

int PeShape::getWidth(){
	return this->width;
}

void PeShape::setWidth(int value){
	this->width = value;
}

int PeShape::getHeight(){
	return this->height;
}

void PeShape::setHeight(int value){
	this->height = value;
}

bool PeShape::isFilled(){
	return this->filled;
}

void PeShape::setFilled(bool value){
	this->filled = value;
}

PeRect* PeShape::getBoundRect(){
	return new PeRect(this->getXPos(), this->getYPos(), this->width, this->height);
}
