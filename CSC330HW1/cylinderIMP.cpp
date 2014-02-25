#include "cylinder.h"

Cylinder::Cylinder() {
	dHeight = 0;
}

void Cylinder::set_Height(double dH) {
	dHeight = dH;
}

double Cylinder::get_Height() {
	return dHeight;
}

double Cylinder::calculateArea() {
	return 2 * Circle::calculateArea() + 2 * 3.14 * get_Radius() * dHeight;
}

double Cylinder::volume() {
	return Circle::calculateArea() * dHeight;
}

bool Cylinder::equal(Cylinder object) {
	if (object.dHeight == dHeight && object.get_Radius() == get_Radius())
		return true;
	return false;
}

void Cylinder::print() {
	Circle::print();
	cout << "The height of the cylinder is: " << dHeight << endl;
	cout << "The area of the cylinder based on the area of the circle is: "
		<< calculateArea() << endl;
}