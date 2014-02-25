#include "Header.h"

Point2D::Point2D() {
	x = 0;
	y = 0;
}

Point2D::Point2D(int iA, int iB) {
	x = iA;
	y = iB;
}

void Point2D::set_X(int iZ) {
	x = iZ;
}

void Point2D::set_Y(int iK) {
	y = iK;
}

int Point2D::get_X() {
	return x;
}

int Point2D::get_Y() {
	return y;
}

bool Point2D::equal(Point2D object) {
	if (object.x == x && object.y == y)
		return true;
	return false;
}

void Point2D::print() {
	cout << "X is: " << x << " and Y is: " << y << endl;
}


Circle::Circle() {
	dRadius = 0;
}

int Circle::set_Radius(int iR){
	dRadius = iR;
}

int Circle::get_Radius() {
	return dRadius;
}

double Circle::calculateDistance(Circle object) {
	return sqrt(pow((object.get_X - get_X), 2) + pow((object.get_Y - get_Y), 2));
}

double Circle::calculateArea() {
	return 3.14*pow(dRadius, 2);
}

bool Circle::equal(Circle object) {
	if (object.dRadius == dRadius)
		return true;
	return false;
}

Cylinder::Cylinder() {
	dHeight = 0;
}
