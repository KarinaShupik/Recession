#pragma once
/*�������� ���� Triad (����� �����); ��������� ������ ���� ����
� ���������� ���� �����. ��������� �������� ���� Triangle � ���������������.
��������� ������ ���������� ���� � ����� ����������.*/

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

