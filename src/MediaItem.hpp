/*
 * MediaItem.hpp
 *
 *  Created on: 16/04/2017
 *      Author: Edgar
 */

#ifndef MEDIAITEM_HPP_
#define MEDIAITEM_HPP_

#include "OrderItem.hpp"
#include "Date.hpp"
#include <string>
using namespace std;


class MediaItem: public OrderItem {
private:
	string AuthorName;
	Date PublicationDate;
	string ISBNNumber;
public:
	MediaItem();
	virtual ~MediaItem();
	string getAuthorName(void);
	bool setAuthorName(string);
	Date getPublicationDate(void);
	bool setPublicationDate(Date);
	string getISBNNumber(void);
	bool setISBNNumber(string);
	virtual string whoAmI(void);

};

#endif /* MEDIAITEM_HPP_ */
