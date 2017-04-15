//
// Created by Alice Easter on 4/13/17.
//

#include "Pasta.h"

Pasta::Pasta(std::string shape, double grams, double price, std::string description) : Food(grams, price, description),
																					   mShape(shape)
{

}

std::string Pasta::getShape()
{
	return mShape;
}

double Pasta::getGrams()
{
	return mGrams;
}

double Pasta::getPrice()
{
	return mPrice;
}

std::string Pasta::getDescription()
{
	return mDescription;
}
