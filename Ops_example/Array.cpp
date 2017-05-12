#include "Array.h"



int & Array::operator[](int i)
{
	if (i >= 0 && i < 10)
	{
		return x[i];
	}
}

int & Array::operator[](string s)
{
	return x[0];
}

Array::Array()
{
	for (int i = 0;i < 10;i++)
	{
		x[i] = 0;
	}
}


Array::~Array()
{
}
