/*
 * Order.hpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#ifndef ORDER_HPP_
#define ORDER_HPP_
#include "Customer.hpp"
#include <vector>
#include <string>
#include <iostream>
#include "OrderItem.hpp"
#include "FoodItem.hpp"
#include "ElectronicItem.hpp"
#include "MediaItem.hpp"
#include <iomanip>

class Order {

private:
	string OrderNumber;
	Date OrderDate;
	vector<OrderItem*> ItemsInOrder;
	Customer *OrderCustomer;
	int counter;

public:
	Order(string, string, vector<Customer*>);
	virtual ~Order();
	string getOrderNumber(void);
	bool setOrderNumber(string);
	Date getOrderDate(void);
	bool setOrderDate(Date);
	vector<OrderItem*> getItemsInOrder(void);
	bool setItemsinOrder(vector<OrderItem*>);
	Customer* getCustomer(void);
	bool setCustomer(Customer*);
	void readFoodItems(void);
	void readMediaItems(void);
	void readElectronicsItems(void);
	double getTotalOfOrder(void);
	void printOrder(void);



};

#endif /* ORDER_HPP_ */
