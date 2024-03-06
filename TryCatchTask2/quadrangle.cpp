#include "quadrangle.hpp"


Quadrangle::Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Figure("Четырехугольник"), a(side1), b(side2), c(side3), d(side4), A(angle1), B(angle2), C(angle3), D(angle4){
    if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side4 <= 0 || angle1 + angle2 + angle3 + angle4 != 360) {
        throw ShapeCreationError("Фигура не является четырехугольником");
    }
}
    
void Quadrangle::print_info() {
    std::cout << name << ":" << std::endl;
    std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d="<< d << std::endl;
    std::cout  << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D="<< D << std::endl;
    std::cout << std::endl;
}
