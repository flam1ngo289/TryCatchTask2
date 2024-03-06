#ifndef GeometryExceptions_hpp
#define GeometryExceptions_hpp

#include <stdio.h>
#include <stdexcept>
#include <exception>
#include <string>

class ShapeCreationError : public std::domain_error {
public:
    explicit ShapeCreationError(const std::string& message) : std::domain_error(message) {}
};

#endif /* GeometryExceptions_hpp */
