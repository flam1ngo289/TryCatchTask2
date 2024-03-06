#include "figure.hpp"
#include <string>
#include <iostream>

Figure::Figure(const std::string& figure_name){
    name = figure_name;
}

void Figure::print_info(){
    std::cout << name << std::endl;
};

