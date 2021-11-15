#include "PeObject.h"
#include <string>
#include "Utils.h"

PeObject::PeObject(long id){
	this->id = id;
	this->name = Utils::intToCharArr(id);
	this->type = PeObjectType::PEO_NO_DIFINE;
	this->position = new PePoint(0, 0);
	this->zOrder = 0;
	this->solid = false;
	this->gravity = false;
	this->gravityForce = 0;
}

PeObject::PeObject(long id, char* name, PeObjectType type, PePoint position){
	this->id = id;
	this->name = name;
	this->type = type;
	this->position = &position;
	this->zOrder = 0;
	this->solid = false;
	this->gravity = false;
	this->gravityForce = 0;
}

PeObject::PeObject(long id, char* name, PeObjectType type, int xPos, int yPos){
	this->id = id;
	this->name = name;
	this->type = type;
	this->position = new PePoint(xPos, yPos);
	this->zOrder = 0;
	this->solid = false;
	this->gravity = false;
	this->gravityForce = 0;
}

PeObject::PeObject(long id, char* name, PeObjectType type){
	this->id = id;
	this->name = name;
	this->type = type;
	this->position = new PePoint(0, 0);
	this->zOrder = 0;
	this->solid = false;
	this->gravity = false;
	this->gravityForce = 0;
}

long PeObject::getId(){
	return this->id;
}

char* PeObject::getName(){
	return this->name;
}

void PeObject::setName(char* name){
	this->name = name;
}

PeObjectType PeObject::getType(){
	return this->type;
}

int PeObject::getIntType(){
	return this->type;
}

void PeObject::setType(PeObjectType type){
	this->type = type;
}

PePoint* PeObject::getPosition(){
	return this->position;
}

void PeObject::setPosition(PePoint point){
	this->position = &point;
}

void PeObject::setPosition(int xPos, int yPos){
	this->position->setPoint(xPos, yPos);
}

int PeObject::getXPos(){
	return this->position->getXPos();
}

void PeObject::setXPos(int value) {
	this->position->setXPos(value);
}

int PeObject::getYPos(){
	return this->position->getYPos();
}

void PeObject::setYPos(int value){
	this->position->setYPos(value);
}

int PeObject::getZOrder(){
	return this->zOrder;
}

void PeObject::setZOrder(int value){
	this->zOrder = value;
}

bool PeObject::isSolid(){
	return this->solid;
}

void PeObject::setSolid(bool value){
	this->solid = value;
}

bool PeObject::hasGravity(){
	return this->gravity;
}

void PeObject::setGravity(bool value){
	this->gravity = value;
}

int PeObject::getGForce(){
	return this->gravityForce;
}

void PeObject::setGForce(int value){
	this->gravityForce = value;
}

void PeObject::moveTo(PePoint dest){
	this->position = &dest;
}

void PeObject::moveTo(int x, int y){
	this->position->setPoint(x, y);
}

void PeObject::moveXPos(int step){
	this->position->setXPos(this->position->getXPos() + step);
}

void PeObject::moveYPos(int step){
	this->position->setYPos(this->position->getYPos() + step);
}
