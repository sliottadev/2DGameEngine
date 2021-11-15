#include "PePoint.h"

class PeRect
{
private:
	int xPos;
	int yPos;
	int width;
	int height;
public:
	PeRect();
	PeRect(int x, int y, int w, int h);
	PeRect(PePoint PntOrigin, PePoint size);

	int getXPos();
	void setXPos(int value);

	int getYPos();
	void setYPos(int value);

	int getWidth();
	void setWidth(int value);

	int getHeight();
	void setHeight(int value);

	PePoint getOrigin();
	void setOrigin(PePoint value);

	PePoint getSize();
	void setSize(PePoint value);

	int getArea();
};

