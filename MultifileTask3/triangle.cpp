#include "triangle.hpp"
#include <iostream>
#include <string>

Triangle::Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3): Figure("Треугольник"), a(side1), b(side2), c(side3), A(angle1), B(angle2), C(angle3){
    
}

void Triangle::print_info() {
        std::cout << name << ":" << std::endl;
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    }



