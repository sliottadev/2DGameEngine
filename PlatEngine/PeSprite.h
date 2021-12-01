#pragma once
#include "PeObject.h"
#include "allegro5/allegro.h"

class PeSprite : public PeObject {
private:
	int width;
	int height;
	ALLEGRO_BITMAP* bmp;
	
	int frameCount;
	int frameWidth;
	int frameHeight;

	int frameIndex;
	
	ALLEGRO_COLOR* transparentColor;
public:
	PeSprite(long id, ALLEGRO_BITMAP* bmp, int frameWidth, int frameHeight, int frameCount);

	int getWidth();
	void setWidth(int value);

	int getHeight();
	void setHeight(int value);

	int getFrameCount();
	void setFrameCount(int value);

	int getFrameWidth();
	void setFrameHeight(int value);
};

