/*
 * integer.h
 *
 *  Created on: Oct 1, 2018
 *      Author: bruno
 */

#ifndef INTEGER_H_
#define INTEGER_H_

class Integer {
private:
	int num;
public:
	Integer();
	Integer(int);//Convert constructor
	~Integer();
	operator int();
	int operator+=(Integer);
	int operator-=(Integer);
	int getNum();
};



#endif /* INTEGER_H_ */
