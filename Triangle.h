#pragma once
#include "Triad.h"

/*Створити клас Triad (трійка чисел); визначити методи зміни полів
і обчислення суми чисел. Визначити похідний клас Triangle з полямисторонами.
Визначити методи обчислення кутів і площі трикутника.*/

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

