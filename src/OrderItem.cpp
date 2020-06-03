/*
 * OrderItem.cpp
 *
 *  Created on: 14/04/2017
 *      Author: Edgar
 */

#include "OrderItem.hpp"
#include "Date.hpp"

OrderItem::OrderItem() {

	OrderNumber = "Unknown";
	ItemNumber = "Unknown";
	ItemDescription = "Unknown";
	Quantity = 0;
	CustomerCost = 0;
	VendorCost= 0;
	TaxExempt = false;
}

OrderItem::~OrderItem() {

	OrderNumber = "Unknown";
	ItemNumber = "Unknown";
	ItemDescription = "Unknown";
	Quantity = 0;
	CustomerCost = 0;
	VendorCost = 0;
	TaxExempt = false;
}
string OrderItem::getOrderNumber(void){
	return OrderNumber;
}
bool OrderItem::setOrderNumber(string aString){
	bool returnValue = true;
	OrderNumber= aString;
	return returnValue;
}
string OrderItem::getItemNumber(void){
	return ItemNumber;
}
bool OrderItem::setItemNumber(string aString){
	bool returnValue = true;
	ItemNumber= aString;
	return returnValue;
}
string OrderItem::getItemDescription(void){
	return ItemDescription;
}
bool OrderItem::setItemDescription(string aString){
	bool returnValue = true;
	ItemDescription= aString;
	return returnValue;
}
int OrderItem::getQuantity(void){
	return Quantity;
}
bool OrderItem::setQuantity(int anInt){
	bool returnValue = true;
	Quantity= anInt;
	return returnValue;
}
double OrderItem::getCustomerCost(void){
	return CustomerCost;
}
bool OrderItem::setCustomerCost(double aDouble){
	bool returnValue = true;
	CustomerCost= aDouble;
	return returnValue;
}
double OrderItem::getVendorCost(void){
	return VendorCost;
}
bool OrderItem::setVendorCost(double aDouble){
	bool returnValue = true;
	VendorCost= aDouble;
	return returnValue;
}
bool OrderItem::getTaxExempt(void){
	return TaxExempt;
}
bool OrderItem::setTaxExempt(bool aBool){
	bool returnValue = true;
	TaxExempt= aBool;
	return returnValue;
}
string OrderItem::whoAmI(void){
	return "I am an order item";

}







