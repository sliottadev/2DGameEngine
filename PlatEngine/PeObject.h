#pragma once
#include "PeObjectTypeConst.h"
#include "PePoint.h"

class PeObject{
private:
	long id;
	char* name;
	PeObjectType type;
	PePoint* position;
	int zOrder;
	bool solid;
	bool gravity;
	int gravityForce;
public:
	PeObject(long id);
	PeObject(long id, char* name, PeObjectType type, PePoint position);
	PeObject(long id, char* name, PeObjectType type, int xPos, int yPos);
	PeObject(long id, char* name, PeObjectType type);

	long getId();
	
	char* getName();
	void setName(char* name);

	PeObjectType getType();
	int getIntType();
	void setType(PeObjectType type);

	PePoint* getPosition();
	void setPosition(PePoint point);
	void setPosition(int xPos, int yPos);

	int getXPos();
	void setXPos(int value);

	int getYPos();
	void setYPos(int value);

	int getZOrder();
	void setZOrder(int value);

	bool isSolid();
	void setSolid(bool value);

	bool hasGravity();
	void setGravity(bool value);

	int getGForce();
	void setGForce(int value);

	void moveTo(PePoint dest);
	void moveTo(int x, int y);
	void moveXPos(int step);
	void moveYPos(int step);
};

