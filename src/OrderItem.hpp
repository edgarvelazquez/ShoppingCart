/*
 * OrderItem.hpp
 *
 *  Created on: 14/04/2017
 *      Author: Edgar
 */

#ifndef ORDERITEM_HPP_
#define ORDERITEM_HPP_
#include <string>
#include <iostream>
using namespace std;
enum Type
	    {
	        TV, PS4, DVDPlayer, Phone,
	    };

class OrderItem {

private:
	string OrderNumber;
	string ItemNumber;
	string ItemDescription;
	int Quantity;
	double CustomerCost;
	double VendorCost;
	bool TaxExempt;
public:
	OrderItem();
	virtual ~OrderItem();
	string getOrderNumber(void);
	bool setOrderNumber(string);
	string getItemNumber(void);
	bool setItemNumber(string);
	string getItemDescription(void);
	bool setItemDescription(string);
	int getQuantity(void);
	bool setQuantity(int);
	double getCustomerCost(void);
	bool setCustomerCost(double);
	double getVendorCost(void);
	bool setVendorCost(double);
	bool getTaxExempt(void);
	bool setTaxExempt(bool);
	virtual string whoAmI(void)=0;
};

#endif /* ORDERITEM_HPP_ */
