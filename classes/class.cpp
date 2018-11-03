/*
 * class.cpp
 *
 *  Created on: Sep 29, 2018
 *      Author: bruno
 */

#include <iostream>
#include "class.h"
using namespace std;

int Person::info = 0;//initialization of static variable

void Person::setAge(int age) {
		if (age == 0) return;
		else if (age < 0) this->age = 0;
		else if (age > 130) this->age = 130;
		else this->age = age;
//.this refers to the age variable in the class we are working it
}

int Person::getAge() {
	return age;
}
//constructor. Invoked every time an instance of the class is created
Person::Person() {
	age = 18;
	//this defines age value by default. If its not defined elsewhere
	p = new int[5];
	cout << "Defaul constructor invoked! " << ++info << endl;
}
//We can overload constructors (Create more than one with dif params), to invoke it, we need to pass the acc params
Person::Person(short age) {
	this->age = age;
	p = new int[5];
	cout << "Overloaded constructor invoked!"<< ++info  << endl;
}
//Destructor is evoked before closing bracket of main. Use it to delete allocated dynamic memory
Person::~Person() {
	cout << "Destructor evoked" << endl;
	delete []p;
}


