#include "righttriangle.hpp"

RightTriangle::RightTriangle(int side1, int side2, int side3, int angle1, int angle2, int angle3) : Triangle(side1, side2, side3, angle1, angle2, angle3) {
        name = "Прямоугольный треугольник";
    if (angle3 != 90) {
        throw ShapeCreationError("Нет прямого угла");
    }
}
