#include <iostream>
#include <conio.h>
#include "Integer.h"
#include "Array.h"

using namespace std;

int main()
{
	Integer a(1), b(2);
	Integer c = a+b;
	cout << "a+b=" << c.getInteger() << endl;
	Integer d = 2+int(c);
	c++;
	++c;
	Array a1;
	for (int i = 0;i < 10;i++)
	{
		a1[i] = i;
	}
	for (int i = 0;i < 10;i++)
	{
		cout << a1[i] << " ";
	}
	
	cout << endl;
	cout << a1["x"] << endl;

	int t1=0, t2=0, t3 = 0;
	t1 = t2 = t3 = 0;
	_getch();
	return 0;
}