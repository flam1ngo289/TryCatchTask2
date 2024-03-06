#ifndef parallelogram_hpp
#define parallelogram_hpp
#include "quadrangle.hpp"
#include "GeometryExceptions.hpp"

class Parallelogram : public Quadrangle{
public:
    Parallelogram(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4);
};

#endif /* parallelogram_hpp */
