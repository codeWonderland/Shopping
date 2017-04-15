//
// Created by Alice Easter on 4/13/17.
//

#include "Pasta.h"

Pasta::Pasta(std::string shape, double grams, double price, std::string description) : Food(grams, price, description),
																					   mShape(shape)
{

}

const std::string &Pasta::getShape() const
{
	return mShape;
}

const double &Pasta::getGrams() const
{
	return mGrams;
}

const double &Pasta::getPrice() const
{
	return mPrice;
}

const std::string &Pasta::getDescription() const
{
	return mDescription;
}
