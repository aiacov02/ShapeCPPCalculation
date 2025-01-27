#include <iostream>
#include <string>
#include "rectangle.h"
#include "circle.h"
#include "shape.h"
#include <memory>

using namespace std;
using namespace Geometry;

int main()
{
	unique_ptr<Shape> shape;
	string inputMsg =  "Please enter shape and press enter:\n\
	C - Cirlce\n\
	R - Rectangle";

    cout << inputMsg << endl;

	char shapeChar;
	cin >> shapeChar;

	switch(shapeChar)
	{
		case 'C':
			cout << "please give radius:" << endl;
			double radius;
			cin >> radius;
			shape = make_unique<Circle>(radius);
			cout << "Area is: " << shape->calculateArea() << endl;
			cout << "Perimeter is: " << shape->calculatePerimeter() << endl;
			break;
		
		case 'R':
			cout << "please give length:" << endl;
			double length, height;
			cin >> length;
			cout << "please give height:" << endl;
			cin >> height;
			shape = make_unique<Rectangle>(length, height);
			cout << "Area is: " << shape->calculateArea() << endl;
			cout << "Perimeter is: " << shape->calculatePerimeter() << endl;
			break;
		default:
			cout << "invalid shape given" << endl;
	}
}