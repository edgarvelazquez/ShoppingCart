/*
 * ElectronicItem.hpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#ifndef ELECTRONICITEM_HPP_
#define ELECTRONICITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"
#include <string>
using namespace std;

class ElectronicItem: public OrderItem {
private:
	Type DeviceType;
	int WarrantyMonths;
public:
	ElectronicItem();
	virtual ~ElectronicItem();
	Type getDeviceType(void);
	bool setDeviceType(Type);
	int getWarrantyMonths(void);
	bool setWarrantyMonths(int);
	virtual string whoAmI(void);
};

#endif /* ELECTRONICITEM_HPP_ */
