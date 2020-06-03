/*
 * Date.hpp
 *
 *  Created on: 08/03/2017
 *      Author: Edgar
 */
#ifndef DATE_HPP_
#define DATE_HPP_
#include <iostream>
#include <fstream>
#include "utilities.hpp"
class Date {
private:
	int Year;
	int Month;
	int Day;

public:
	Date();
	Date(int, int, int);
	virtual ~Date();

	int getYear(void);
	int getMonth(void);
	int getDay(void);

	bool setYear(int anInt);
	bool setMonth(int anInt);
	bool setDay(int anInt);
	string getDateString(void);

};

#endif /* DATE_HPP_ */
