#pragma once
#include "Types.h"
#include <string>

class Text
{
	int size;
	byte* content;
	std::string fileName;
public:
	Text();
	Text(byte *cont, int size_, std::string fileName_);
	byte getByte(int byte_num);
	int getSize();
	~Text();
};

