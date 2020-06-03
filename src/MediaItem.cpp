/*
 * MediaItem.cpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#include "MediaItem.hpp"
#include "FoodItem.hpp"

MediaItem::MediaItem() {

	AuthorName = "Unknown";
	ISBNNumber = "Unknown";

}

MediaItem::~MediaItem() {

	string AuthorName = " ";
	string ISBNNumber = " ";
}
string MediaItem::getAuthorName(void) {
	return AuthorName;
}
bool MediaItem::setAuthorName(string aString) {
	bool returnValue = true;
	AuthorName = aString;
	return returnValue;

}
Date MediaItem::getPublicationDate(void) {
	return PublicationDate;

}
bool MediaItem::setPublicationDate(Date aDate) {
	bool returnValue = true;
	PublicationDate = aDate;
	return returnValue;

}
string MediaItem::getISBNNumber(void) {
	return ISBNNumber;

}
bool MediaItem::setISBNNumber(string aString) {
	bool returnValue = true;
	ISBNNumber = aString;
	return returnValue;
}
string MediaItem::whoAmI(void) {
	return "Media Item";

}

