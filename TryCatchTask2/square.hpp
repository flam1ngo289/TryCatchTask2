#ifndef square_hpp
#define square_hpp
#include "rectangle.hpp"
#include "GeometryExceptions.hpp"

class Square : public Rectangle{
public:
    Square(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4);
};


#endif 
