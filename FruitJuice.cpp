//
// Created by Alice Easter on 4/13/17.
//

#include "FruitJuice.h"

FruitJuice::FruitJuice(std::string flavor, double milliliters, double price, std::string description) :
		Beverage(milliliters, price, description), mFlavor(flavor)
{

}

const std::string &FruitJuice::getFlavor() const
{
	return mFlavor;
}

const double &FruitJuice::getMilliliters() const
{
	return mMilliliters;
}

const double &FruitJuice::getPrice() const
{
	return mPrice;
}

const std::string &FruitJuice::getDescription() const
{
	return mDescription;
}