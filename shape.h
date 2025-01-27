#ifndef SHAPE_H
#define SHAPE_H

namespace Geometry
{
    class Shape
    {
        protected:
            double area;
            double perimeter;

        public:
            virtual double calculateArea() = 0;
            virtual double calculatePerimeter() = 0;
            virtual ~Shape() = default;
    };
}

#endif