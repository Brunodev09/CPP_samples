/*
 * inheritance.cpp
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */

#include <iostream>
#include "inheritance.h"

using namespace std;

Point::Point(int x) {
	this->x = x;
}

int Point::getX() {
	return x;
}

void Point::setX(int x) {
	this->x = x;
	cout << "I'm from Point!" << endl;
}

Point::~Point() {

}


Point2D::Point2D(int x, int y) : Point(x) { //Inherting the x value from parent
	this->y = y; //only initializing new variables
}

int Point2D::getY() {
	return y;
}

void Point2D::setY(int y) {
	this->y = y;
}

void Point2D::set(int x, int y) {
	setX(x);
	setY(y);
}

void Point2D::setX(int x) {
	this->x = x;
	cout << "I'm from Point2D!" << endl;
}

Point2D::~Point2D() {

}
