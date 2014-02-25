#include "point.h"

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

double Point2D::calculateDistance(Point2D object) {
	return sqrt(pow((object.get_X() - get_X()), 2) + pow((object.get_Y() - get_Y()), 2));
}

bool Point2D::equal(Point2D object) {
	if (object.x == x && object.y == y)
		return true;
	return false;
}

void Point2D::print() {
	cout << "Point X is: " << x << " and Point Y is: " << y << endl;
}
