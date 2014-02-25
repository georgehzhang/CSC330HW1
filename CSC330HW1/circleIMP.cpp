#include "circle.h"

Circle::Circle() {
	dRadius = 0;
}

void Circle::set_Radius(double iR){
	dRadius = iR;
}

double Circle::get_Radius() {
	return dRadius;
}

double Circle::calculateDistance(Circle object) {
	return sqrt(pow((object.get_X() - get_X()), 2) + pow((object.get_Y() - get_Y()), 2));
}

double Circle::calculateArea() {
	return 3.14*pow(dRadius, 2);
}

bool Circle::equal(Circle eObject) {
	if (eObject.dRadius == dRadius)
		return true;
	return false;
}

void Circle::print() {
	Point2D::print();
	cout << "The radius is: " << dRadius << endl;
	cout << "The area of the circle is: " << calculateArea() << endl;
}