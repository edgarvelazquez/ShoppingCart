

#include "Date.hpp"
#include <iostream>     // std::cout, std::ostream, std::ios
#include <fstream>
#include <sstream>

Date::Date() {

	Day=01;
	Year=1970;
	Month=01;

}

Date::Date(int theDay, int theMonth, int theYear) {
	// TODO Auto-generated constructor stub
	Day=theDay;
	Year=theYear;
	Month=theMonth;

}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

int Date::getYear(void) {
	return Year;
}
bool Date::setYear(int anInt) {
	bool returnValue = true;
	Year = anInt;
	return returnValue;
}
int Date::getMonth(void) {
	return Month;
}

bool Date::setMonth(int anInt) {
	bool returnValue = true;
	Month = anInt;
	return returnValue;
}
int Date::getDay(void) {
	return Day;
}

bool Date::setDay(int anInt) {
	bool returnValue = true;
	Day = anInt;
	return returnValue;
}
string Date:: getDateString(void){
	string finalDate;

	 ostringstream convert;
	 string result;
	 convert << Month;
	 result = convert.str();

	 ostringstream convert2;
	 string result2;
	 convert2 << Day;
	 result2 = convert2.str();


	 ostringstream convert3;
	 string result3;
	 convert3 << Year;
	 result3 = convert.str();
	 finalDate = (result+"/"+result2+"/"+result3);
	 return finalDate;
}
