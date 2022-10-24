#pragma once
#include "Triad.h"

/*�������� ���� Triad (����� �����); ��������� ������ ���� ����
� ���������� ���� �����. ��������� �������� ���� Triangle � ���������������.
��������� ������ ���������� ���� � ����� ����������.*/

class Triangle final:
    public Triad
{
public:
    Triangle();
    Triangle(float firstNum, float secondNum, float thirdNum);
    float squareAreaTriad();
    void cornerTriad();
    void Display() override;
};

