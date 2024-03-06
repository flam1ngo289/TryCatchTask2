#include "square.hpp"

Square::Square(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Rectangle(side1, side2, side3, side4, angle1, angle2, angle3, angle4){
        name = "Квадрат";
    if ((side1 != side2 && side1 != side3 && side1 !=side4) || (angle1 != 90 && angle2 != 90 && angle3 != 90 && angle4 != 90)) {
        throw ShapeCreationError("Фигура не является квадратом");
    }

    }
