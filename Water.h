//
// Created by Alice Easter on 4/15/17.
//

#ifndef PA3_WATER_H
#define PA3_WATER_H


#include "Beverage.h"

class Water : public Beverage
{
public:

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	Water(bool carbonated = false, double milliliters = 0.0, double price = 0.0, std::string description = " ");

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const bool &getCarbonated() const;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const double &getMilliliters() const;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const double &getPrice() const;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const std::string &getDescription() const;

private:
	bool mCarbonated;
};


#endif //PA3_WATER_H
