#pragma once
#include "PeObject.h"
#include "PeColor.h"
#include "PeShapeType.h"
#include "PeRect.h"
#include "Utils.h"

class PeShape : public PeObject {
private:
	PeShapeType* type;
	PeColor* color;
	int thickness;
	int width;
	int height;
	bool filled;
public:
	PeShape(long id, PeShapeType type);
	PeShape(long id, char* name, PeShapeType type, PeRect* rect);

	PeShapeType* getType();
	void setType(PeShapeType* value);

	PeColor* getColor();
	void setColor(PeColor* value);

	int getThickness();
	void setThickness(int value);

	int getWidth();
	void setWidth(int value);

	int getHeight();
	void setHeight(int value);

	bool isFilled();
	void setFilled(bool value);

	PeRect* getBoundRect();
};

