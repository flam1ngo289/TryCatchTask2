#include "righttriangle.hpp"

RightTriangle::RightTriangle(int side1, int side2, int side3, int angle1, int angle2) : Triangle(side1, side2, side3, angle1, angle2, 90) {
        name = "Прямоугольный треугольник";
    }
