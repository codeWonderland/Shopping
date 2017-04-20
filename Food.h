//
// Created by Alice Easter on 4/13/17.
//

#ifndef PA3_FOOD_H
#define PA3_FOOD_H


#include "Groceries.h"

class Food : public Groceries
{
public:

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	Food(double grams = 0.0, double price = 0.0, std::string description = " ");

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	virtual const double &getGrams() const = 0;

protected:
	double mGrams;
};


#endif //PA3_FOOD_H
