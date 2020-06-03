/*
 * Customer.hpp
 *
 *  Created on: 14/04/2017
 *      Author: Edgar
 */

#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_
#include "Date.hpp"
#include <string>
#include <iostream>
using namespace std;

class Customer {

private:
	string CustomerNumber;
	string CustomerName;
	string Email;
	Date DateJoined;
public:
	Customer();
	virtual ~Customer();
	string getCustomerNumber(void);
	bool setCustomerNumber(string);
	string getCustomerName(void);
	bool setCustomerName(string);
	string getEmail(void);
	bool setEmail(string);
	Date getDateJoined(void);
	bool setDateJoined(Date);
};

#endif /* CUSTOMER_HPP_ */
