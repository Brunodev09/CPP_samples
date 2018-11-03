/*
 * files_2.cpp
 *
 *  Created on: Oct 3, 2018
 *      Author: bruno
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	fstream file;
	file.open("data.txt", ios::out | ios::binary | ios::in);

	if (file.is_open()) {
		cout << "File has been opened." << endl; //Each char and space is 1 byte (8bits = 1byte)
		file << "Test";
		streampos size = file.tellg(); //4 bytes long = 4 chars long
		cout << size << endl;

		file.seekg(0, ios::beg);
		cout << file.tellp() << endl;//Tell where is put pointer located
		file.seekp(0, ios::beg);
		file << "t";

		file.close();

	} else
		cout << "Error in opening file!";

	return 0;
}

