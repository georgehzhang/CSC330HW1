#ifndef Header_H
#define Header_H
#include<iostream>
#include <cmath>

using namespace std;

class Point2D {
private:
	int x;
	int y;
public:
	Point2D();
	Point2D(int iA, int iB);
	void set_X(int iZ);
	void set_Y(int iK);
	int get_X();
	int get_Y();
	bool equal(Point2D object);
	void print();
};

class Circle : public Point2D {
private:
	double dRadius;
public:
	Circle();
	Circle(int iA, int iB, double dR) : 
		Point2D(iA,iB), dRadius(dR){}
	int set_Radius(int iR);
	int get_Radius();
	double calculateDistance(Circle object);
	double calculateArea();
	bool equal(Circle object);
};

class Cylinder : public Circle {
private:
	double dHeight;
public:
	Cylinder();
	Cylinder(int iA, int iB, double dR, double dH) : 
		Circle(iA, iB, dR), dHeight(dH){}
	double calculateDistance();
	double volume();

};

#endif