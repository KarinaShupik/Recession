#pragma once
/*Створити клас Triad (трійка чисел); визначити методи зміни полів
і обчислення суми чисел. Визначити похідний клас Triangle з полямисторонами.
Визначити методи обчислення кутів і площі трикутника.*/

class Triad
{
protected:
	float a;
	float b;
	float c;
public:
	Triad();
	Triad(float firstNum, float secondNum, float thirdNum);
	virtual void Display();
	float sumOfTriad();
};

