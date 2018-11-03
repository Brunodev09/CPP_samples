#include <iostream>

using namespace std;

struct person {
	string name;
	short age;
	int phone;
};

void justSomeFunc(person *);

int main() {

//	person p;//struct works like objects
//	cout << p.name << endl;

	person p[5]; //can create array of structs
	p[0].name = "Bruno";
	p[1].name = "Giannotti";

	person *pointer = &p[0]; //can also be defined as a pointer
	cout << (*p).name << endl; //structs also work like arrays when it comes to pointers
	cout << (*(p+1)).name << endl; //running values of the array with pointers

	cout << p->name << endl; //another pointer representation
	cout << (p+1)->name << endl;

	justSomeFunc(pointer);

	return 0;
}

//When we are treating structs as pointers, we must use the -> notation
void justSomeFunc(person *objeto) {
	objeto->name = "lulu";
	objeto->age = 2;
	cout << objeto->name << endl;
	cout << objeto->age << endl;
}

