//============================================================================
// Name        : Chapter14_15Project.cpp
// Author      : Edgar Velazquez
// Version     :
// Copyright   : Do not copy this, I'am a student, so it's probably wrong
// Description : Hello World in C++, Ansi-style
//============================================================================
//Project Name: Chapter 14/15
//Project Description: Creating a Shopping Cart
//Project Author: Velazquez, Edgar
//Is this an extra credit Project:  No
//Date completed: 04/23/2017
//Operating system used: Windows 8.1
//IDE Used:  Eclipse

#include <iostream>
#include <cstdlib>
using namespace std;
#include <vector>
#include "OrderItem.hpp"
#include "ElectronicItem.hpp"
#include "FoodItem.hpp"
#include "Order.hpp"
#include "Customer.hpp"
#include "Date.hpp"
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

	vector<Customer*> theCustomers;
	string ID;
	string Name;
	string EMAIL;
	int Year = 0;
	int Month = 0;
	int Day = 0;

	Date customerDate;

	ifstream myInputFile;
	myInputFile.open("CustomerFile.txt");
	if (myInputFile.fail()) {
		myInputFile.close();
		cout << "File opening failed" << endl;
	} else {

		while (!myInputFile.eof()) {

			myInputFile >> ID;
			myInputFile >> Name;
			myInputFile >> EMAIL;
			myInputFile >> Year;
			myInputFile >> Month;
			myInputFile >> Day;

			Customer *CustomerPointer = new Customer;
			CustomerPointer->setCustomerNumber(ID);
			CustomerPointer->setCustomerName(Name);
			CustomerPointer->setEmail(EMAIL);

			customerDate.setDay(Day);
			customerDate.setMonth(Month);
			customerDate.setYear(Year);
			CustomerPointer->setDateJoined(customerDate);

			theCustomers.push_back(CustomerPointer);

		}

	}

	myInputFile.close();

	vector<Order*> theOrders;
	string orderID;
	int YearOrder;
	int MonthOrder;
	int DayOrder;
	string OrderCustomerID;
	Date orderDate;
	ifstream myInputFileOrders;

	myInputFileOrders.open("OrderFile.txt");
	if (myInputFileOrders.fail()) {
		myInputFileOrders.close();
		cout << "File opening failed" << endl;
	} else {
		while (!myInputFileOrders.eof()) {

			myInputFileOrders >> orderID;
			myInputFileOrders >> YearOrder;
			myInputFileOrders >> MonthOrder;
			myInputFileOrders >> DayOrder;
			myInputFileOrders >> OrderCustomerID;

			Order *OrderPointer = new Order(orderID, OrderCustomerID,
					theCustomers);

			OrderPointer->setOrderNumber(orderID);
			orderDate.setYear(YearOrder);
			orderDate.setMonth(MonthOrder);
			orderDate.setDay(DayOrder);

			OrderPointer->setOrderDate(orderDate);

			theOrders.push_back(OrderPointer);
		}

	}

	myInputFileOrders.close();

	if (argc > 2) {
		cout
				<< "ERROR! This program only takes a single argument - order number"
				<< endl;
		exit(1);
	}
	if (argc == 1) {
		cout << "Your entire report will be printed" << endl;

		cout << "Welcome to my my amazing Shopping Cart" << endl;
		for (unsigned int i = 0; i < theOrders.size(); i++) {
			theOrders[i]->printOrder();
		}
	}
	if (argc == 2) {
		// print the report with only the order located in argv[2]

		string orderToProcess = argv[1];
		cout << "Order number " << orderToProcess << " will be printed" << endl;
		for (unsigned int x = 0; x < theOrders.size(); x++) {
			if (theOrders[x]->getOrderNumber() == argv[1]) {
				theOrders[x]->printOrder();

			}
		}
	}

	for (unsigned int i = 0; i < theOrders.size(); i++) {
		delete theOrders[i];
	}

	for (unsigned int i = 0; i < theCustomers.size(); i++) {
		delete theCustomers[i];
	}

	theOrders.clear();
	theCustomers.clear();

	cout << "Program ending, have a nice day" << endl; // prints !!!Hello World!!!
	return 0;
}
