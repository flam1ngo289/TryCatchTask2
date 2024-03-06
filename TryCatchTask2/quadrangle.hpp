#ifndef quadrangle_hpp
#define quadrangle_hpp
#include "GeometryExceptions.hpp"
#include "figure.hpp"

class Quadrangle : public Figure {
protected:
    int a, b, c, d;
    int A, B, C, D;
public:
    Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4);
    
    void print_info() override;
};

#endif 
