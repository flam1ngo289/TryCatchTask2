#include <iostream>
#include <string>
#include "figure.hpp"
#include "triangle.hpp"
#include "righttriangle.hpp"
#include "isoscelestriangle.hpp"
#include "equilateraltriangle.hpp"
#include "quadrangle.hpp"
#include "parallelogram.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "rhombus.hpp"
#include "print.hpp"

int main(int argc, const char * argv[]) {

    Triangle triangle(10, 20, 30, 50, 60 ,70);
    print_info(&triangle);
    
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    print_info(&rightTriangle);
    
    IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
    print_info(&isoscelesTriangle);
    
    EquilateralTriangle equilateralTriangle(30);
    print_info(&equilateralTriangle);
    
    Quadrangle quadrangle(10,20,30,40,50,60,70,80);
    print_info(&quadrangle);
    
    Rectangle rectangle(10, 20);
    print_info(&rectangle);
    
    Parallelogram parallelogram(20,30, 30, 40);
    print_info(&parallelogram);
    
    Rhombus rhombus(30, 30, 40);
    print_info(&rhombus);   

        return 0;
}
