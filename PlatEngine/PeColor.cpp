#include "PeColor.h"

PeColor::PeColor(int r, int g, int b, int a){
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

PeColor::PeColor(char* hexaColor){
	this->r = Utils::hexToInt(Utils::subCharArr(hexaColor, 0, 2));
	this->g = Utils::hexToInt(Utils::subCharArr(hexaColor, 2, 2));
	this->b = Utils::hexToInt(Utils::subCharArr(hexaColor, 4, 2));
	this->a = Utils::hexToInt(Utils::subCharArr(hexaColor, 6, 2));
}

int PeColor::getRed(){
	return this->r;
}

void PeColor::setRed(int value){
	this->r = value;
}

int PeColor::getGreen(){
	return this->g;
}

void PeColor::setGreen(int value){
	this->g = value;
}

int PeColor::getBlue(){
	return this->b;
}

void PeColor::setBlue(int value){
	this->b = value;
}

int PeColor::getAlpha(){
	return this->a;
}

void PeColor::setAlpha(int value){
	this->a = value;
}

void PeColor::setColor(int r, int g, int b, int a){
	this->r = r;
	this->g = g;
	this->b = b;
	this->a = a;
}

void PeColor::setColor(char* hexaColor){
	this->r = Utils::hexToInt(Utils::subCharArr(hexaColor, 0, 2));
	this->g = Utils::hexToInt(Utils::subCharArr(hexaColor, 2, 2));
	this->b = Utils::hexToInt(Utils::subCharArr(hexaColor, 4, 2));
	this->a = Utils::hexToInt(Utils::subCharArr(hexaColor, 6, 2));
}
