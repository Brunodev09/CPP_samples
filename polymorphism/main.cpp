/*
 * main.cpp
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */


#include <iostream>
#include "farm.h"

using namespace std;

void caller(Animal *);
void caller(Animal &); //overloading and replacing with reference

int main() {
	Dog dog;
	Cat cat;
	Cow cow;

/*	cout << animal.getVoice() << endl;
	cout << dog.getVoice() << endl;
	cout << cat.getVoice() << endl;
	cout << cow.getVoice() << endl;*/

	caller(cat);//using reference

	//using pointer
	//caller(&cat); //We can call all methods from the parent class!

/*	What enables this to happen are virtual classes, and the fact that the compiler can identify which
	class method to call according to the address is of multiple classes is called polymorphism*/

	Animal *pointer = &dog; //This is something that only the parent class can do with a pointer only
//	cout << p->getVoice() << endl;//Here we are using the function from Animal even though we are pointing to Dog
	//That is why we don't get the ID back
	//We are only receiving our ID back once we change getVoice() in Animal to virtual

	return 0;
}

void caller(Animal *p) {
	cout << p->getVoice() << endl;
}

void caller(Animal &r) {
	cout << r.getVoice() << endl;
}
