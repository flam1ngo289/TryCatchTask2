#ifndef rhombus_hpp
#define rhombus_hpp
#include "parallelogram.hpp"
#include "GeometryExceptions.hpp"

class Rhombus : public Parallelogram {
public:
    Rhombus(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4);
};

#endif 
