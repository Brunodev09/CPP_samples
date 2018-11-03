/*
 * files.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: bruno
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {

	/* DEFAULT MODE (FLAGS):
	 	 * ios::in - READ
	 	 * ios::out - WRITE - If there is no file, create IT! Also truncates it.
	 	 * ios::trunc - TRUNCATE - Cut everything inside
	 	 * ios::ate - AT THE END - sets the pointer at the end of file - TO READ AND WRITE AT THE END OF THE FILE. Can change pointer position
	 	 * ios::app - APPEND - the content is added at the end of the file (not possivle to remove content or add something in other place other than the end of the file
	 	 * ios::binary - OPENS AS BINARY FILE - to open other kind of files other than .txt
	 	 *
	 	 * bad(1bit) -> if we are trying to run commands that are not flagged
	 	 * fail(4bits) -> if we try to assing string to int
	 	 * eof(2bits) -> end of file. Returns true when it reaches the end. VERY IMPORTANT for looping
	 	 * clear() -> clear the state
	 	 * rdstate() -> reads the state
	 	 *
	 	 *If rdstate = 1 -> bad
	 	 *If rdstate = 4 -> fail
	 	 *If rdstate = 2 -> eof
	 	 *If rdstate = 5 -> bad + eof
	 	 *If rdstate = 6 -> fail + eof
	 	 *If rdstate = 7 -> fail + bad + eof
	 	 *
	 	 *
	 	 *
	 	 *tellg - tell get - tell where is the reading pointer (measured in bytes)
	 	 *seekg - seek get - get reading pointer at specified pos
	 	 *
	 	 *seekg(how_many_bytes_jump_from_flag, flag)
	 	 *
	 	 *tellp - tell put - tell where the put pointer location is
	 	 *seekp - seek put - set writing pointer at specific position
	 	 *
	 	 *flags:
	 	 *
	 	 *ios::beg - from beginning
	 	 *ios::end - from end
	 	 *ios::cur - from current place
	 	 *
	 	 *
	 	 *
	 * fstream -ios::in | ios::out
	 * ifstream -ios::in
	 * ofstream -ios::out*/

	fstream fileHandler; //Can also be done via constructor fstream fileHanlder("myData.txt", ios::out);
	//fileHandler.open("myData.txt", ios::out);//Default is in AND out

	fileHandler.open("myData.txt", ios::in | ios::out | ios::binary);
	//If I want to create a new file, use ONLY OUT, and not IN!!!
	//If I want to READ anything, IN must be on
	//If I want to READ and WRITE but not CREATE, then I can set both on

	if (fileHandler.is_open()) {

		//fileHandler << "algo";
		cout << "The file has been opened and edited properly." << endl;

		streampos sizeOfFile = fileHandler.tellg();//tellg returns type streampos

		fileHandler.seekg(0, ios::end); //positionate the reading pointer to the beggining of the file to be able to read
		cout << fileHandler.tellg() << endl;
		fileHandler.seekg(0, ios::beg);
		cout << fileHandler.tellg() << endl;
		cout << fileHandler.tellp();//Tell where is put pointer located

		do{
			string buffer;
			fileHandler >> buffer;
			cout << buffer << endl;

		}while(!fileHandler.eof());

		if ((fileHandler.rdstate()^ifstream::eofbit) == 0) {
			fileHandler.clear();
			cout << fileHandler.tellg() << endl;
		}


		fileHandler.close();

	} else cout << "There was a problem opening the file!";

	return 0;
}


