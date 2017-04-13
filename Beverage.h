//
// Created by Alice Easter on 4/13/17.
//

#ifndef PA3_BEVERAGE_H
#define PA3_BEVERAGE_H


#include "Groceries.h"

class Beverage : public Groceries
{
public:

	Beverage(double milliliters = 0.0, double price = 0.0, std::string description = " ");

	virtual double getMilliliters() = 0;

protected:
	double mMilliliters;
};


#endif //PA3_BEVERAGE_H
