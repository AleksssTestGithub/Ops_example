#pragma once
#include <iostream>
using namespace std;
class B
{
private:
	int b;
public:
	B(int i) { b = i; }
};
class Integer
{
private:
	int integer;
public:
	int getInteger() const;
	void setInteger(int);

	Integer operator+(const Integer& i);
	Integer& operator++();
	Integer& operator++(int);
	explicit operator int()const;
	operator B()const;
	Integer& operator=(const Integer& i);

	friend ostream& operator<<(ostream &s, const Integer& i);
	friend istream& operator>>(istream &s, Integer& i);
	Integer(int);
	Integer();
	~Integer();
};

