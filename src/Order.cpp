/*
 * Order.cpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#include "Order.hpp"

Order::Order(string orderID, string customerID, vector<Customer*> customerVector) {
	// TODO Auto-generated constructor stub
	OrderNumber = orderID;
	OrderCustomer = NULL;


	for (unsigned int i = 0; i < customerVector.size(); i++) {
		if (customerVector[i]->getCustomerNumber() == customerID) {
			setCustomer(customerVector[i]);
		}
		else {

		}
	}

	readFoodItems();
	readMediaItems();
	readElectronicsItems();

}

Order::~Order() {
	// TODO Auto-generated destructor stub
	for (unsigned int i = 0; i < ItemsInOrder.size(); i++) {
			delete ItemsInOrder[i];
		}
	ItemsInOrder.clear();
	OrderNumber = " ";
	//delete OrderCustomer;
}
string Order::getOrderNumber(void) {
	return OrderNumber;
}
bool Order::setOrderNumber(string aString) {
	bool returnValue = true;
	OrderNumber = aString;
	return returnValue;

}
Date Order::getOrderDate(void) {
	return OrderDate;

}
bool Order::setOrderDate(Date aDate) {
	bool returnValue = true;
	OrderDate = aDate;
	return returnValue;
}
vector<OrderItem*> Order::getItemsInOrder(void) { //TODO:: Check vector
	return ItemsInOrder;

}
bool Order::setItemsinOrder(vector<OrderItem*> aVector) {
	bool returnValue = true;
	ItemsInOrder = aVector;
	return returnValue;

}
Customer* Order::getCustomer(void) {
	return OrderCustomer;

}
bool Order::setCustomer(Customer *aCustomer) {
	bool returnValue = true;
	OrderCustomer = aCustomer;
	return returnValue;

}
void Order::readFoodItems(void) {
	string OrderNumberFood;
	string ItemNumber;
	string ItemDescription;
	int Quantity;
	double CustomerCost;
	double VendorCost;
	char TaxExempt;
	bool TAXBOOL;
	int Year;
	int Month;
	int Day;
	int Calories;
	int Fat;
	Date customerDate;

	ifstream myInputFileFood;
	myInputFileFood.open("FoodItems.txt");
	if (myInputFileFood.fail()) {
		myInputFileFood.close();
		cout << "File opening failed" << endl;
	} else {
		while (!myInputFileFood.eof()) {
			myInputFileFood >> OrderNumberFood;
			myInputFileFood >> ItemNumber;
			myInputFileFood >> ItemDescription;
			myInputFileFood >> Quantity;
			myInputFileFood >> CustomerCost;
			myInputFileFood >> VendorCost;
			myInputFileFood >> TaxExempt;
			myInputFileFood >> Year;
			myInputFileFood >> Month;
			myInputFileFood >> Day;
			myInputFileFood >> Calories;
			myInputFileFood >> Fat;

			if(TaxExempt == 'Y'){
				TAXBOOL=true;
			}
			else if(TaxExempt == 'N'){
				TAXBOOL=false;
				}



			if(OrderNumberFood==this->OrderNumber){
			FoodItem *FoodItemPointer = new FoodItem();
			FoodItemPointer->setOrderNumber(OrderNumberFood);
			FoodItemPointer->setItemNumber(ItemNumber);
			FoodItemPointer->setItemDescription(ItemDescription);
			FoodItemPointer->setQuantity(Quantity);
			FoodItemPointer->setCustomerCost(CustomerCost);
			FoodItemPointer->setVendorCost(VendorCost);
			FoodItemPointer->setTaxExempt(TAXBOOL);

			customerDate.setDay(Day);
			customerDate.setMonth(Month);
			customerDate.setYear(Year);
			FoodItemPointer->setExpirationDate(customerDate);
			FoodItemPointer->setCalories(Calories);
			FoodItemPointer->setCalories(Fat);
			counter++;
			ItemsInOrder.push_back(FoodItemPointer);
			}

		}

	}
	myInputFileFood.close();

}
void Order::readMediaItems(void) {



	string OrderNumberMedia;
	string ItemNumberMedia;
	string ItemDescriptionMedia;
	int QuantityMedia;
	double CustomerCostMedia;
	double VendorCostMedia;
	char TaxExemptMedia;
	bool MEDIATAX;
	int YearMedia;
	int MonthMedia;
	int DayMedia;
	string AuthorName;
	Date PublicationDate;
	string ISBNNumber;



	ifstream myInputFileMedia;
	myInputFileMedia.open("MediaItems.txt");
	if (myInputFileMedia.fail()) {
		myInputFileMedia.close();
		cout << "File opening failed" << endl;
	} else {
		while (!myInputFileMedia.eof()) {
			myInputFileMedia >> OrderNumberMedia;
			myInputFileMedia >> ItemNumberMedia;
			myInputFileMedia >> ItemDescriptionMedia;
			myInputFileMedia >> QuantityMedia;
			myInputFileMedia >> CustomerCostMedia;
			myInputFileMedia >> VendorCostMedia;
			myInputFileMedia >> TaxExemptMedia;
			myInputFileMedia >> YearMedia;
			myInputFileMedia >> MonthMedia;
			myInputFileMedia >> DayMedia;
			myInputFileMedia >> AuthorName;
			myInputFileMedia >> ISBNNumber;

			if (TaxExemptMedia == 'Y') {
				MEDIATAX = true;
			} else if (TaxExemptMedia == 'N') {
				MEDIATAX = false;
			}

			if(OrderNumberMedia==this->OrderNumber){
			MediaItem *MediaItemPointer = new MediaItem();
			MediaItemPointer->setOrderNumber(OrderNumberMedia);
			MediaItemPointer->setItemNumber(ItemNumberMedia);
			MediaItemPointer->setItemDescription(ItemDescriptionMedia);
			MediaItemPointer->setQuantity(QuantityMedia);
			MediaItemPointer->setCustomerCost(CustomerCostMedia);
			MediaItemPointer->setVendorCost(VendorCostMedia);
			MediaItemPointer->setTaxExempt(MEDIATAX);
			PublicationDate.setDay(DayMedia);
			PublicationDate.setMonth(MonthMedia);
			PublicationDate.setYear(YearMedia);
			MediaItemPointer->setPublicationDate(PublicationDate);
			MediaItemPointer->setAuthorName(AuthorName);
			MediaItemPointer->setISBNNumber(ISBNNumber);
			counter++;
			ItemsInOrder.push_back(MediaItemPointer);
			}

		}

	}
	myInputFileMedia.close();

}
void Order::readElectronicsItems(void) {
	string OrderNumberElectronic;
		string ItemNumberElectronic;
		string ItemDescriptionElectronic;
		int QuantityElectronic;
		double CustomerCostElectronic;
		double VendorCostElectronic;
		char TaxExemptElectronic;
		bool TAXBOOL;
		int EnumElectronic;
		int WarrantyMonths;

		ifstream myInputFileElectronic;
		myInputFileElectronic.open("ElectronicItems.txt");
		if (myInputFileElectronic.fail()) {
			myInputFileElectronic.close();
			cout << "File opening failed" << endl;
		} else {
			while (!myInputFileElectronic.eof()) {

				myInputFileElectronic >> OrderNumberElectronic;
				myInputFileElectronic >> ItemNumberElectronic;
				myInputFileElectronic >> ItemDescriptionElectronic;
				myInputFileElectronic >> QuantityElectronic;
				myInputFileElectronic >> CustomerCostElectronic;
				myInputFileElectronic >> VendorCostElectronic;
				myInputFileElectronic >> TaxExemptElectronic;
				myInputFileElectronic >> EnumElectronic;
				myInputFileElectronic >> WarrantyMonths;


				if (TaxExemptElectronic == 'Y') {
				TAXBOOL = true;
			} else if (TaxExemptElectronic == 'N') {
				TAXBOOL = false;
			}

				if(OrderNumberElectronic==this->OrderNumber){
				ElectronicItem *ElectronicItemItemPointer = new ElectronicItem();
				ElectronicItemItemPointer->setOrderNumber(OrderNumberElectronic);
				ElectronicItemItemPointer->setItemNumber(ItemNumberElectronic);
				ElectronicItemItemPointer->setItemDescription(ItemDescriptionElectronic);
				ElectronicItemItemPointer->setQuantity(QuantityElectronic);
				ElectronicItemItemPointer->setCustomerCost(CustomerCostElectronic);
				ElectronicItemItemPointer->setVendorCost(VendorCostElectronic);
				ElectronicItemItemPointer->setTaxExempt(TAXBOOL);
				ElectronicItemItemPointer->setDeviceType(Type(EnumElectronic-1));
				ElectronicItemItemPointer->setWarrantyMonths(WarrantyMonths);
				counter++;
				ItemsInOrder.push_back(ElectronicItemItemPointer);
				}
			}

		}
		myInputFileElectronic.close();



}
double Order::getTotalOfOrder(void) {
	//TODO :: getTotalOfOrder:  Returns a double which is a sum of each
	//OrderItem’s customerCost multiplied by the quantity ordered.
	double total = 0;
		for (unsigned int i=0; i<ItemsInOrder.size(); i++) {
			total += (ItemsInOrder[i]->getCustomerCost() * ItemsInOrder[i]->getQuantity());
		}//for
		return total;
	return 0;
}


void Order::printOrder(void) {
	//print a header
	cout << setw(13) << "Order ID" << setw(20) << "Customer ID" << setw(20) << "Order Date" << setw(20) << "Customer" << endl;
	cout << setw(13) << "--------" << setw(20) << "-----------" << setw(20) << "----------" << setw(20) << "--------" << endl;


	cout << setw(13) << this->OrderNumber << setw(20) << right
			<< OrderCustomer->getCustomerNumber() << setw(12) << right
			 << this->OrderDate.getMonth() << "/" << right << this->OrderDate.getDay() << "/" << right << this->OrderDate.getYear() << setw(20) << right
			<< OrderCustomer->getCustomerName() << endl;
		cout << setw(19) << right << "--------------" << endl;

	//print the FoodItems header
	cout << setw(20) << right << "Food Items Ordered: " << setw(20) << right << "Item Number" << setw(40) << right << "Item Description" << setw(20) << right << "Calories" << setw(20) << right << "Cost" << endl;
	cout << setw(40) << right << "-----------" << setw(40) << right << "-----------------" << setw(20) << right << "--------" << setw(20) << right << "----" << endl;

	//print the FoodItems in the Order
	for(int i=0; i<ItemsInOrder.size(); i++) {
		if(ItemsInOrder[i]->whoAmI() == "Food Item" ) {
			cout << setw(40) << right << ItemsInOrder[i]->getItemNumber()
				 << setw(40) << right << ItemsInOrder[i]->getItemDescription()
				 << setw(20) << right << static_cast<FoodItem*>(ItemsInOrder[i])->getCalories()
				 << setw(20) << right << ItemsInOrder[i]->getCustomerCost() << endl;
		}//if
	}//for
	cout << setw(19) << right << "--------------" << endl;

	//print a MediaItems header
	cout << setw(20) << right << "Media Items Ordered: " << setw(19) << right << "Item Number" << setw(40) << right << "Item Description" << setw(20) << right << "ISBN" << setw(20) << right << "Cost" << endl;
	cout << setw(40) << right << "-----------" << setw(40) << right << "-----------------" << setw(20) << right << "----" << setw(20) << right << "----" << endl;

	//print the MediaItems in the Order
	for (int i = 0; i < ItemsInOrder.size(); i++) {
		if (ItemsInOrder[i]->whoAmI() == "Media Item") {
			cout << setw(40) << right
					<< ItemsInOrder[i]->getItemNumber()
					<< setw(40) << right
					<< ItemsInOrder[i]->getItemDescription()
					<< setw(20) << right
					<< static_cast<MediaItem*>(ItemsInOrder[i])->getISBNNumber()
					<< setw(20) << right
					<< ItemsInOrder[i]->getCustomerCost() << endl;
		}	//if
	}	//for
	cout << setw(19) << right << "--------------" << endl;

	//print ElectronicItems header
	cout << setw(20) << right << "Elec. Items Ordered:" << setw(20) << right
			<< "Item Number" << setw(40) << right << "Item Description"
			<< setw(20) << right << "Warranty" << setw(20) << right << "Cost"
			<< endl;
	cout << setw(40) << right << "-----------" << setw(40) << right
			<< "-----------------" << setw(20) << right << "--------"
			<< setw(20) << right << "----" << endl;

	//print the FoodItems in the Order
	for (int i = 0; i < ItemsInOrder.size(); i++) {
		if (ItemsInOrder[i]->whoAmI() == "Electronic Item") {
			cout << setw(40) << right
					<<ItemsInOrder[i]->getItemNumber()
					<< setw(40) << right
					<< ItemsInOrder[i]->getItemDescription()
					<< setw(20) << right
					<< static_cast<ElectronicItem*>(ItemsInOrder[i])->getWarrantyMonths()
					<< setw(20) << right
					<< ItemsInOrder[i]->getCustomerCost() << endl;
		}	//if
	}	//for

	cout << "Total For This Order Will Be: $" << getTotalOfOrder() << endl;
		cout << "=============================" << endl;


}//printOrder()
