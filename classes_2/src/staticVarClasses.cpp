//============================================================================
// Name        : staticVarClasses.cpp
// Author      : brunoDev
// Version     :
// Copyright   : Apache 2.0
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "class.h"
#include "position.h"
#include "friendClasses.h"
using namespace std;

void setX(Position &, int);

int main() {
//	cout << "Classes" << endl; // prints Classes
	User userA;
	User userB;
//	User user[5];

	cout << userA.getID() << endl;
	cout << userB.getID() << endl;
	cout << User::getCounter() << endl;//avaiable due to the static method we created

	Position posA;
	posA.getPos();
	posA.setPos(10,10);
	posA.getPos();

	const Position posC; //const objects cannot alter values or cast functions
	posC.getPos(); //this will work, because we set it in position.h
	//posC.setPos(1,2); //so this will not work!

	setX(posA,35);
	posA.getPos();

	A a;
	B b;
	b.setSecretValue(a, 666);
	cout << a.getSecret() << endl;
	return 0;
}

void setX(Position &obj, int value) {
	//Position &obj = &posA
	obj.x = value;
}
