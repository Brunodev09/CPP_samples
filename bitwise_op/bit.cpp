/*
 * bit.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: bruno
 */

#include <iostream>

using namespace std;

int main() {
	/*
	0 - bit
	1 - bit

	0101 0010 - bytes

	126 = 1 * 10^2 + 2 * 10^1 + 6 * 10^0 = 100 + 20 + 6

	1010 = 1 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0 = 8 + 0 + 2 + 0 = 10
	1010 = 1 * 2^3 + 1 * 2^1 = 8 + 2 = 10
	(can pass through 0 whenever we see it in binary because n*0=0)
	(also no need to take 1 in account because n*1=n)
	(just read the position of the number - 1 (starting to count from one))
	1010 = 2^3 + 2^1 = 10

	ex: 101100 = 2^2 + 2^3 + 2^5 = 32 + 8 + 4 = 44

	Bitwise AND - &
	Bitwise OR - |
	Bitwise NOT - ~
	Bitwise XOR - ^ (exclusive OR)
	0 0 -> 0
	0 1 -> 1
	1 0 -> 0
	1 1 -> 0
	Bitwise left shift <<
	Bitwise right shift >>


	*/

	cout << (10 & 2) << endl;
	/*
	 * AND:
	 * 1 0 1 0
	 * 0 0 1 0
	 * -------
	 * 0 0 1 0 = 2
	 * */
	cout << (10 | 2) << endl;
	/*
	 * OR:
	 * 1 0 1 0
	 * 0 0 1 0
	 * -------
	 * 1 0 1 0 = 10
	 * */
	cout << (10 ^ 2) << endl;
	/*
	 * OR:
	 * 1 0 1 0
	 * 0 0 1 0
	 * -------
	 * 1 0 0 0 = 8
	 * */
	cout << (~10) << endl;
	/*
	 * NOT:
	 * 1 0 1 0
	 * -------
	 * 0 1 0 1 = 2^2 + 2^1 = 5 buuuuut
	 * All the left zeros are being turned to 1, don't try to calculate it, but its -11
	 * */

	cout << (10 << 3) << endl;//10 * 2^3
	cout << (10 << 4) << endl;//10 * 2^4
/*	0000000000000 1010 = 10
	0000000000001 0101 = 20
	*/
	cout << (10 >> 3) << endl;//10 / 2^3
	cout << (10 >> 4) << endl;//10 / 2^4

	return 0;
}




