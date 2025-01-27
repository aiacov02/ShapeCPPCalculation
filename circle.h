#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

namespace Geometry
{
    class Circle: public Shape
    {
        private:
            double radius;
        public:
            Circle(double radius);
            double calculateArea() override;
            double calculatePerimeter() override;
    };
}

#endif