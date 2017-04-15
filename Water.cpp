//
// Created by Alice Easter on 4/15/17.
//

#include "Water.h"


Water::Water(bool carbonated, double milliliters, double price, std::string description) :
		Beverage(milliliters, price, description), mCarbonated(carbonated)
{

}

const bool &Water::getCarbonated() const
{
	return mCarbonated;
}

const double &Water::getMilliliters() const
{
	return mMilliliters;
}

const double &Water::getPrice() const
{
	return mPrice;
}

const std::string &Water::getDescription() const
{
	return mDescription;
}
