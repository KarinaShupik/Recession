#include "Triad.h"
#include <iostream>

using namespace std;

Triad::Triad()
{
	a = 1;
	b = 1;
	c = 1;
}

Triad::Triad(float firstNum, float secondNum, float thirdNum)
{
	a = firstNum;
	b = secondNum;
	c = thirdNum;
}

void Triad::Display()
{
	cout << "First side of triad: " << a << endl;
	cout << "Second side of triad: " << b << endl;
	cout << "Third side of triad: " << c << endl;
	cout << "Sum of triad`s sides: " << sumOfTriad() << endl;
	cout << endl;
}

float Triad::sumOfTriad()
{
	return a + b + c;
}
