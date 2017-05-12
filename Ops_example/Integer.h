#pragma once
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
	Integer operator+(const Integer& i);
	int getInteger() const;
	void setInteger(int);
	Integer& operator++();
	Integer& operator++(int);
	explicit operator int()const;
	operator B()const;
	Integer& operator=(const Integer& i);
	Integer(int);
	Integer();
	~Integer();
};

