#include "rhombus.hpp"

Rhombus::Rhombus(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Parallelogram(side1, side2, side3, side4, angle1, angle2, angle3, angle4){
        name = "Ромб";
    if ((side1 != side2 && side1 != side3 && side1 !=side4) || (angle1 != angle3 || angle2 != angle4)) {
        throw ShapeCreationError("Фигура не является ромбом");
    }
}

