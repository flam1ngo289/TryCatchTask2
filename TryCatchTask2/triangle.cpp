#include "triangle.hpp"
#include <iostream>
#include <string>
#include "GeometryExceptions.hpp"


Triangle::Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3): Figure("Треугольник"), a(side1), b(side2), c(side3), A(angle1), B(angle2), C(angle3){
    if (side1 <= 0 || side2 <= 0 || side3 <= 0 || angle1 <= 0 || angle2 <= 0 || angle3 <= 0 ||
        angle1 + angle2 + angle3 != 180 || angle1 >= 180 || angle2 >= 180 || angle3 >= 180) {
        throw ShapeCreationError("Сумма углов не равна 180");
    }
}

void Triangle::print_info() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }



