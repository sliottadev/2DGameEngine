
class PePoint
{
private:
	int xPos;
	int YPos;
public:
	PePoint();
	PePoint(int xPos, int yPos);
	
	int getXPos();
	void setXPos(int value);
	
	int getYPos();
	void setYPos(int value);

	void setPoint(int x, int y);

	const char* toString();
};

