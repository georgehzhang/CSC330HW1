#ifndef point_H
#define point_H
#include<iostream>
#include <cmath>

using namespace std;

class Point2D {
private:
/**************************
Represented as points <x,y>
**************************/
	int x;
	int y;
public:
	Point2D();
	Point2D(int iA, int iB);
	void set_X(int iZ);
	void set_Y(int iK);
	int get_X();
	int get_Y();
	double calculateDistance(Point2D object);
	/********************************************************
	Will check if another point is equal to the point it is
	being compared to
	********************************************************/
	bool equal(Point2D object);
	void print();
};

#endif