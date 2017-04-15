//
// Created by Alice Easter on 4/15/17.
//

#include "Chips.h"

Chips::Chips(std::string flavor, double grams, double price, std::string description) : Food(grams, price, description),
																						mFlavor(flavor)
{

}

const std::string &Chips::getFlavor() const
{
	return mFlavor;
}

const double &Chips::getGrams() const
{
	return mGrams;
}

const double &Chips::getPrice() const
{
	return mPrice;
}

const std::string &Chips::getDescription() const
{
	return mDescription;
}
