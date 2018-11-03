/*
 * inheritance.h
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */

#ifndef INHERITANCE_H_
#define INHERITANCE_H_

class Point { //called base or parent class or superclass
protected: //this modifier will allow inheritance of variables between classes but still making it private
	int x;
public:
	//Point();
	Point(int =0); //=0 replaces the default constructor. This way we can either input an int or nothing
	//It sets the default value in case a value is not sent
	~Point();
	int getX();
	void setX(int);
};

class Point2D : public Point { //Inheriting only the public section WITHOUT CONSTRUCTORS.
	//If I inherit as private Point, everything that is public from Point will become private here
	//Called derived class, child class or subclass
protected:
	int y;
public:
	Point2D(int =0, int =0);
	~Point2D();
	int getY();
	void setY(int);
	void set(int, int);
	void setX(int); //Changing an existing method

};



#endif /* INHERITANCE_H_ */
