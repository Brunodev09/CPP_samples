/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: bruno
 */

#include <iostream>
#include "copy.h"
#include "integer.h"


using namespace std;

int main() {

	Copy obj(50,10,20); //executing constructor with ints
	Copy obj2 = obj; //This will trigger the copy constructor Copy obj2 = obj(50,10,20);

	*(obj.p) = 700; //When you copy constructors, you copy the address of variables and pointers
	//Not needed to make a func and pass params as pointers and references

/*	cout << "obj.x: " << obj.x << endl; //Uncomment this to check Copy constructor
	cout << "obj.y: " << obj.y << endl;
	cout << "*(obj.p): " << *(obj.p) << endl;

	cout << endl << endl;

	cout << "obj2.x: " << obj2.x << endl;
	cout << "obj2.y: " << obj2.y << endl;
	cout << "*(obj2.p): " << *(obj2.p) << endl;*/

	Integer a(50); //One int with the size of 50x4 bytes
	a = 100; //this is how we assign values to overloaded constructor or Integer a(50)
	//When I do a=100, I'm calling the Convert constructor!!!!!
	cout << a.getNum() << endl;
	int b = (int)a; //This will trigger an error unless we handle the conversion in our class
	//That is because a is NOT an integer, it is an object, a class!
	cout << b << endl;

	a+=b; //a = a + b; 100 + 100
	cout << a << endl;
	a-=b;
	cout << a << endl;
	return 0;
}



