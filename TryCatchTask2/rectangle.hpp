#ifndef rectangle_hpp
#define rectangle_hpp
#include "parallelogram.hpp"
#include "GeometryExceptions.hpp"

class Rectangle : public Parallelogram{
public:
    Rectangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4);
};

#endif /* rectangle_hpp */
