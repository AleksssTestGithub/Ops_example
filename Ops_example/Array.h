#pragma once
#include <string>
using namespace std;
class Array
{
private:
	int x[10];
public:
	int& operator[](int i);
	int& operator[](string s);
	Array();
	~Array();
};

