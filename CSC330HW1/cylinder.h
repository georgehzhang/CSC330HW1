#ifndef cylinder_H
#define cylinder_H

#include "point.h"
#include "circle.h"
/*********************************************************
Cylinder inherits from Circle which inherits from Point2D
*********************************************************/
class Cylinder : public Circle {
private:
	double dHeight;
public:
	Cylinder();
	/********************************************************
	Constructor allows user to initialize Point2D and Circle
	through the creation of a Cylinder variable
	********************************************************/
	Cylinder(int iA, int iB, double dR, double dH) :
		Circle(iA, iB, dR), dHeight(dH){}
	void set_Height(double dH);
	double get_Height();
	double calculateArea();
	double volume();
	/********************************************************
	Will check if another cylinder object is the same size as
	the one it is being compared to
	********************************************************/
	bool equal(Cylinder object);
	void print();
};

#endif
