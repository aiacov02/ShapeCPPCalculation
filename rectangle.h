#ifndef REC_H
#define REC_H

#include "shape.h" 

namespace Geometry
{
    class Rectangle: public Shape
    {
        private:
            double length;
            double height;

        public:
            Rectangle(double length, double height);
            double calculateArea() override;
            double calculatePerimeter() override;
    };
}

#endif
