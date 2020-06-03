/*
 * ElectronicItem.cpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#include "ElectronicItem.hpp"

ElectronicItem::ElectronicItem() {

	WarrantyMonths =0;
	DeviceType =Type(0);

}

ElectronicItem::~ElectronicItem() {

	WarrantyMonths = 0;
}
Type ElectronicItem::getDeviceType(void){
	return DeviceType;

}
bool ElectronicItem::setDeviceType(Type aType){
	bool returnValue = true;
	DeviceType = aType;
	return returnValue;

}
int ElectronicItem::getWarrantyMonths(void){
	return WarrantyMonths;

}
bool ElectronicItem::setWarrantyMonths(int anInt){
	bool returnValue = true;
	WarrantyMonths = anInt;
	return returnValue;
}
string ElectronicItem::whoAmI(void){
	//TODO :: DEFINE WHOAMI
	return "Electronic Item";

}
