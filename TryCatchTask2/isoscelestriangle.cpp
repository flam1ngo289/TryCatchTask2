#include "isoscelestriangle.hpp"

IsoscelesTriangle::IsoscelesTriangle(int side1, int side2, int side3, int angle1, int angle2, int angle3) : Triangle(side1, side2, side3, angle1, angle2, angle3){
        name = "Равнобедренный треугольник";
    if (side1 != side2 && angle1 != angle3) {
        throw ShapeCreationError("Треугольник неравнобедренный");
    }
    };

