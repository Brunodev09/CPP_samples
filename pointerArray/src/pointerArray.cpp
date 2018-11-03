//============================================================================
// Name        : pointerArray.cpp
// Author      : brunoDev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void memory();
void pointersOnChar();

int main() {
	int arr[3] = {20,40,60};//Arrays are pointers!!! Also arrays in C/C++ always have an extra hidden char '\0'


	cout << &arr[0] << " " << &arr[1] << " " << &arr[2] << " " << &arr[3];//Point each 4 bytes a new 'variable' address
	cout << endl << endl;

	cout << *(arr + 0) << endl;//By summing ints we can move the pointer in the array values
	cout << *(arr + 1) << endl;
	cout << *(arr + 2) << endl;

	memory();
	pointersOnChar();

	return 0;
}

void memory() {
/*	int arr[];
	int a;
	cin >> a;
	arr[a];*/ //This is not safe, because it can get memory that is not accessible
	int a;


	{//local scope. Executes without condition
		int *p = new int; //Frees 4 bytes (int) of memory
		*p = 50;
		delete p; //Releases the 4 bytes. Does not delete the pointer, only what is stored.
		//Only needs to delete memory that is dynamically accessed -> new

		p = &a;
		if (p != NULL) cout << "There is something here!";

	}

	// Going back to the problem that above that is commented out
	int amount;
	cin >> amount;
	int *pointer = new int[amount];

	for (int i = 0; i < amount; i++) {
		cout << "Enter the " << (i+1) << "number: " << endl;
		cin >> pointer[i];
	}


	delete []pointer;
}


void pointersOnChar() {
	string text = "1234";
	char texto[5] = "1234";

	//To change string to char
	const char * text2 = text.c_str();
}
