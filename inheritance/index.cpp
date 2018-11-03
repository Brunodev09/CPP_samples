/*
 * index.cpp
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */

#include <iostream>
#include "inheritance.h"

using namespace std;

void opOnPoints();

int main() {
	opOnPoints();
	return 0;
}

void opOnPoints() {//As I understood it, we inherit methods and variables but not its values

	Point p;
	Point2D p2;

	p.setX(10);
	p2.set(50,100);
	p2.setX(60);//Here we are invoking our new setX() in P2D
	p2.Point::setX(50); //Here we are using the setX() from P

	cout << p.getX() << endl;

	cout << p2.getX() << " ";
	cout << p2.getY();
}



