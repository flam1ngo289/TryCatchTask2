#include "parallelogram.hpp"

Parallelogram::Parallelogram(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Quadrangle(side1, side2, side3, side4, angle1, angle2, angle3, angle4){
        name = "Параллелограмм";
    if (!(side1 == side3 || side2 == side4) || (angle1 != angle3 || angle2 != angle4)) {
        throw ShapeCreationError("Фигура не является параллелограммом");
    }
    }

