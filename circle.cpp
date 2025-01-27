#include "circle.h"

using namespace::Geometry;

Circle::Circle(double radius): radius(radius){}

double Circle::calculateArea()
{
    this->area = ((radius * radius) * 3.14);
    return this->area;
}

double Circle::calculatePerimeter()
{
    this->perimeter = 2 * 3.14 * radius;
    return this->perimeter;
}