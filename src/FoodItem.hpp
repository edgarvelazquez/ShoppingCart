/*
 * FoodItem.hpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#ifndef FOODITEM_HPP_
#define FOODITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"
#include <string>
using namespace std;

class FoodItem: public OrderItem {
private:
	Date ExpirationDate;
	int Calories;
	int Fat;
public:
	FoodItem();
	virtual ~FoodItem();
	Date getExpirationDate(void);
	bool setExpirationDate(Date);
	int getCalories(void);
	bool setCalories(int);
	int getFat(void);
	bool setFat(int);
	virtual string whoAmI(void);
};

#endif /* FOODITEM_HPP_ */
