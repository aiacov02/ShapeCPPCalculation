#include "rectangle.h"

using namespace Geometry;

Rectangle::Rectangle(double length, double height): length(length), height(height) {}

double Rectangle::calculateArea()
{
    this->area = length * height;
    return area;
}

double Rectangle::calculatePerimeter()
{
    this->perimeter = (length * 2) + (height * 2);
    return this->perimeter;
}