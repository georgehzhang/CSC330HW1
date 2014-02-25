/*******************
	George Zhang
	CSC330 HW1
*******************/

#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include <iostream>
#include <cmath>
using namespace std;


/***************************************************
Distance from the object to the origin of <0,0>
We can omit the second coordinates because of
where the origin starts. Function is overloaded
to accept a point or the center of the circle
****************************************************/
double distance(Point2D object);
double distance(Circle object);

int main() {

	/***************************************************************************
	Creating two points to compared with eachother. One utilizes a constructor
	with parameters and one uses the default constructor with set functions
	***************************************************************************/
	cout << "First Point: " << endl;
	Point2D point1(5, 3);
	point1.print();
	cout << "Distance from the origin: " << distance(point1) << endl;
	cout << "Second Point: " << endl;
	Point2D point2;
	point2.set_X(5);
	point2.set_Y(3);
	point2.print();
	cout << "Distance from the origin: " << distance(point2) << endl;
	cout << "Distance between both points: " << point1.calculateDistance(point2) << endl;
	cout << "Are they equal? " << point1.equal(point2) << endl << endl;
	
	/***************************************************************************
	Creating two circles to compared with eachother. One utilizes a constructor
	with parameters and one uses the default constructor with set functions
	***************************************************************************/
	cout << "First Circle: " << endl;
	Circle circle1(5, 3, 5);
	circle1.print();
	cout << "Distance from the origin: " << distance(circle1) << endl;
	cout << "Second Circle: " << endl;
	Circle circle2;
	circle2.set_Radius(5);
	circle2.set_X(3);
	circle2.set_Y(4);
	circle2.print();
	cout << "Distance from the origin: " << distance(circle2) << endl;
	cout << "Distance between both circles: " << circle1.calculateDistance(circle2) << endl;
	cout << "Are they equal? " << circle1.equal(circle2) << endl << endl;
	
	/***************************************************************************
	Creating two cylinders to compared with eachother. One utilizes a constructor
	with parameters and one uses the default constructor with set functions
	***************************************************************************/
	cout << "First Cylinder: " << endl;
	Cylinder cylinder1(3, 4, 6, 2);
	cylinder1.print();
	cout << "Second Cylinder: " << endl;
	Cylinder cylinder2;
	cylinder2.set_Height(5);
	cylinder2.set_X(5);
	cylinder2.set_Y(3);
	cylinder2.set_Radius(1);
	cylinder2.print();
	cout << "Are they equal? " << cylinder1.equal(cylinder2) << endl;


	system("pause");
	return 0;
}


double distance(Point2D object) {
	return sqrt(pow(object.get_X(), 2) + pow(object.get_Y(), 2));
}

double distance(Circle object){
	return sqrt(pow(object.get_X(), 2) + pow(object.get_Y(), 2));
}