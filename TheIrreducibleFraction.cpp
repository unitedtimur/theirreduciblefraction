﻿/*
*
* byUnitedTimur
*
*/

#include <iostream>

using namespace std;

class IrreducibleFraction
{
private:
	int first, second;
public:
	IrreducibleFraction(int, int);
	void setNumber();
	void printNumbers();
	bool isIrrFrac();
};

IrreducibleFraction::IrreducibleFraction(int first = 0, int second = 0)
{
	this->first = first;
	this->second = second;
}

void IrreducibleFraction::setNumber()
{

	cout << "Please, enter a two numbers, which I need check." << endl;
	cin >> first >> second;
	
}

void IrreducibleFraction::printNumbers()
{
	cout << "The numbers, which you introduced = " << first << "/" << second << endl;
}

bool IrreducibleFraction::isIrrFrac()
{
	int i = 2;
	int _first = first;
	int _second = second;

	do
	{
		if ((_first % i == 0) && (_second % i == 0))
			return true;
		i++;
	} while (i < first || i < second);

	return false;
}

int main()
{
	IrreducibleFraction number;

	number.setNumber();
	number.printNumbers();

	if (!number.isIrrFrac())
		cout << "This numbers is irreducible fraction." << endl;
	else
		cout << "This numbers isn't irreducible fraction." << endl;


	system("pause");
	return 0;
}
