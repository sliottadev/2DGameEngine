#include "Utils.h"
#include <string>

char* Utils::intToCharArr(int value)
{
	std::string strData = std::to_string(value);

	char* temp = new char[strData.length() + 1];
	strcpy_s(temp, strData.length() + 1, strData.c_str());

	return temp;
}

char* Utils::subCharArr(char* source, int begin, int len)
{
	char* res = new char[len + 1];
	for (int i = 0; i < len; i++)
		res[i] = *(source + begin + i);
	res[len] = 0;
	return res;	
}

unsigned int Utils::hexToInt(char* hexNumber)
{
	unsigned int result;
	sscanf(hexNumber, "%x", &result);
	return result;
}
