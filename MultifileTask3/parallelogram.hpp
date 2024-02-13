#ifndef parallelogram_hpp
#define parallelogram_hpp
#include "quadrangle.hpp"

class Parallelogram : public Quadrangle{
public:
    Parallelogram(int side1, int side2, int angle1, int angle2);
};

#endif /* parallelogram_hpp */
