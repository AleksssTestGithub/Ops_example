#include "Integer.h"
#include <iostream>

using namespace std;


Integer Integer::operator+(const Integer & i)
{
	return Integer(this->getInteger()+i.getInteger());
}

int Integer::getInteger() const
{
	return integer;
}

void Integer::setInteger(int i)
{
	integer = i;
}

Integer& Integer::operator++()
{
	this->setInteger(this->getInteger() + 1);
	return Integer(this->getInteger());
}

Integer & Integer::operator++(int)
{
	this->setInteger(this->getInteger() + 1);
	return Integer(this->getInteger()-1);
}

Integer::operator int() const
{
	return getInteger();
}




Integer::operator B() const
{
	return B(getInteger());
}

Integer & Integer::operator=(const Integer & i)
{
	setInteger(i.getInteger());
	return *this;
}

Integer::Integer(int i)
{
	setInteger(i);
}

Integer::Integer()
{
}


Integer::~Integer()
{
}

ostream & operator<<(ostream & s, const Integer & i)
{
	s << i.getInteger();
	return s;
}
