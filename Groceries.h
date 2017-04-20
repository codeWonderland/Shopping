//
// Created by Alice Easter on 4/13/17.
//

#ifndef PA3_GROCERIES_H
#define PA3_GROCERIES_H


#include <string>
#include <iostream>
#include <iomanip>

class Groceries
{
public:

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	Groceries(std::string description = " ", double price = 0.0);

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	virtual const std::string &getDescription() const = 0;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	virtual const double &getPrice() const = 0;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	virtual ~Groceries();

protected:
	std::string mDescription;
	double mPrice;
};


#endif //PA3_GROCERIES_H
