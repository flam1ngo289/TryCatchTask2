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
    try {
        Triangle triangle(10, 20, 30, 50, 60 ,70);
        print_info(&triangle); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        RightTriangle rightTriangle(10, 20, 30, 30, 60, 90);
        print_info(&rightTriangle); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        IsoscelesTriangle isoscelesTriangle(10, 20, 10, 50, 60, 70);
        print_info(&isoscelesTriangle); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        EquilateralTriangle equilateralTriangle(5, 5, 5, 60, 60, 60);
        print_info(&equilateralTriangle); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        Quadrangle quadrangle(10,20,30,40,90,120,110,40);
        print_info(&quadrangle); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        Rectangle rectangle(10,30,10,20,90,90,90,90);
        print_info(&rectangle); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        Square square(10,10,10,10, 90,90,90,90);
        print_info(&square);
    }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        Parallelogram parallelogram(10,20,10,20,80,100,80,100);
        print_info(&parallelogram); }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }
    
    try {
        Rhombus rhombus(10,10,10,10,150,30,150,30);
        print_info(&rhombus);   }
    catch (const ShapeCreationError& e) {
        std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
        std::cout << std::endl;
    }

        return 0;
}
