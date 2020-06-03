/*
 * FoodItem.cpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#include "FoodItem.hpp"

FoodItem::FoodItem() {
	Calories =0;
	Fat=0;

}

FoodItem::~FoodItem() {

	Calories =0;
	Fat=0;
}

Date FoodItem::getExpirationDate(void){
	return ExpirationDate;

}
bool FoodItem::setExpirationDate(Date aDate){
	bool returnValue = true;
	ExpirationDate = aDate;
	return returnValue;

}
int FoodItem::getCalories(void){
	return Calories;

}
bool FoodItem::setCalories(int anInt){
	bool returnValue = true;
	Calories = anInt;
	return returnValue;

}
int FoodItem::getFat(void){
	return Fat;

}
bool FoodItem::setFat(int anInt){
	bool returnValue = true;
	Fat = anInt;
	return returnValue;

}
string FoodItem::whoAmI(void){
	//TODO:: WHO AM I
	return "Food Item";

}
