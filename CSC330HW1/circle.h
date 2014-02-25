#ifndef circle_H
#define circle_H
#include "point.h"

/***************************
Inherits from Point2D class
****************************/
class Circle : public Point2D {
private:
	double dRadius;
public:
	Circle();
	/********************************************************
	Constructor allows user to initialize Point2D
	through the creation of a Circle variable
	********************************************************/
	Circle(int iA, int iB, double dR) :
		Point2D(iA, iB), dRadius(dR){}
	void set_Radius(double iR);
	double get_Radius();
	double calculateDistance(Circle object);
	double calculateArea();
	/********************************************************
	Will check if another Circle object is the same size as
	the one it is being compared to
	********************************************************/
	bool equal(Circle eObject);
	void print();
};

#endif