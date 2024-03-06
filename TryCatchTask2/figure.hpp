#ifndef figure_hpp
#define figure_hpp
#include <string>
#include <iostream>

#include <stdio.h>
class Figure {
protected:
    std::string name;
public:
    Figure(const std::string& figure_name);
    
    virtual void print_info();
};

#endif /* figure_hpp */
