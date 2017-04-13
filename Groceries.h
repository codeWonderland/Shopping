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

	Groceries(std::string description = " ", double price = 0.0);

	virtual std::string getDescription = 0;

	virtual double getPrice = 0;

	virtual ~Groceries();

protected:
	std::string mDescription;
	double mPrice;
};


#endif //PA3_GROCERIES_H
