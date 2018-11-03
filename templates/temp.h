

#ifndef TEMP_H_
#define TEMP_H_

#include <iostream>

using namespace std;

template<typename P>//This creates the template of a class. Definitions of func must be on the same file
//This template only accepts ONE TYPE. But it can be ANY type.
class Point {
protected:
	P x;
public:
	Point(P =0);
	~Point();
	P getX();
	void setX(P);
};

template<typename P>
Point<P>::Point(P x) {
	this->x = x;
}

template<typename P>
P Point<P>::getX() {
	return x;
}

template<typename P>
void Point<P>::setX(P x) {
	this->x = x;
	cout << "I'm from Point!" << endl;
}

template<typename P>
Point<P>::~Point() {

}

template <typename K>
class Point<K*> {
public:
	Point(K =0) {cout << endl << "You cannot use pointers here";}
};

template<typename P>
class Point2D : public Point<P> {
protected:
	P y;
public:
	Point2D(P =0, P =0);
	~Point2D();
	P getY();
	void setY(P);
	void set(P, P);
	void setX(P);
	Point2D operator+(Point2D);

};


template<typename P>
Point2D<P>::Point2D(P x, P y) : Point<P>(x) {
	this->y = y;
}

template<typename P>
P Point2D<P>::getY() {
	return y;
}

template<typename P>
void Point2D<P>::setY(P y) {
	this->y = y;
}

template<typename P>
void Point2D<P>::set(P x, P y) {
	setX(x);
	setY(y);
}

template<typename P>
void Point2D<P>::setX(P x) {
	this->x = x;
	cout << "I'm from Point2D!" << endl;
}

template<typename P>
Point2D<P> Point2D<P>::operator +(Point2D obj) {
	Point2D aux;

	aux.setX(this->getX() + obj.getX());
	aux.setY(this->getY() + obj.getY());

	return aux;
}

template<typename P>
Point2D<P>::~Point2D() {

}


template<>
class Point<char> {
public:
	Point(char =0) {cout << "Invoking Point char class!";}
};




#endif /* TEMP_H_ */
