#ifndef triangle_hpp
#define triangle_hpp
#include "figure.hpp"

#include <stdio.h>

class Triangle : public Figure{
protected:
    int a, b, c;
    int A, B, C;
    
public:
    Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3);
    void print_info();
};

#endif

