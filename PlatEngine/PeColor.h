#pragma once
#include "Utils.h"

class PeColor{
private:
	int r;
	int g;
	int b;
	int a;
public:
	PeColor(int r, int g, int b, int a);
	PeColor(char* hexaColor);

	int getRed();
	void setRed(int value);

	int getGreen();
	void setGreen(int value);

	int getBlue();
	void setBlue(int value);

	int getAlpha();
	void setAlpha(int value);

	void setColor(int r, int g, int b, int a);
	void setColor(char* hexaColor);
};

