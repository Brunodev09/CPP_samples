/*
 * farm.cpp
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */


#include <iostream>
#include "farm.h"

using namespace std;

Animal::Animal() {
}

string Dog::getVoice() {
	return voice + " id: " + ID;
}

string Cat::getVoice() {
	return voice  + " id: " + ID;
}

string Cow::getVoice() {
	return voice  + " id: " + ID;
}

Animal::~Animal() {

}

Dog::Dog() {
	voice = "woof woof";
	ID = "0";
}

Dog::~Dog() {

}

Cat::Cat() {
	voice = "meow meow";
	ID = "1";
}

Cat::~Cat() {

}

Cow::Cow() {
	voice = "mooh mooh";
	ID = "2";
}

Cow::~Cow() {

}




