#include "equilateraltriangle.hpp"

EquilateralTriangle::EquilateralTriangle(int side1, int side2, int side3, int angle1, int angle2, int angle3) : Triangle(side1, side2, side3, angle1, angle2, angle3){
        name = "Равносторонний треугольник";
    if (side1 != side2 || side1 != side3 || side2 != side3 || angle1 != 60 || angle2 !=60 || angle3 != 60) {
        throw ShapeCreationError("Треугольник неравносторонний");
    }
    }
