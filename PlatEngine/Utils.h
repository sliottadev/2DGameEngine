#pragma once
class Utils{
public:
	static char* intToCharArr(int value);
	static char* subCharArr(char* source, int begin, int len);
	static unsigned int hexToInt(char* hexNumber);
private:
	Utils(){}
};

