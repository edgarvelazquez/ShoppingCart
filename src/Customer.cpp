/*
 * Customer.cpp
 *
 *  Created on: 14/04/2017
 *      Author: Edgar
 */

#include "Customer.hpp"

Customer::Customer() {

	CustomerNumber = "Unknown";
	CustomerName= "Unknown";
	Email= "Unknown";

}

Customer::~Customer() {
	CustomerNumber = "Unknown";
	CustomerName= "Unknown";
	Email= "Unknown";
}
string Customer::getCustomerNumber(void){
	return CustomerNumber;
}
bool Customer::setCustomerNumber(string aString){
	bool returnValue = true;
	CustomerNumber= aString;
	return returnValue;
}
string Customer::getCustomerName(void){
	return CustomerName;
}
bool Customer::setCustomerName(string aString){
	bool returnValue = true;
	CustomerName = aString;
	return returnValue;
}
string Customer::getEmail(void){
	return Email;
}
bool Customer::setEmail(string aString){
	bool returnValue = true;
	Email= aString;
	return returnValue;
}
Date Customer::getDateJoined(void){
	return DateJoined;
}
bool Customer::setDateJoined(Date aDate){
	bool returnValue = true;
	DateJoined= aDate;
	return returnValue;

}
