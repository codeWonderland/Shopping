//
// Created by Alice Easter on 4/13/17.
//

#include "Beverage.h"

Beverage::Beverage(double milliliters, double price, std::string description) : Groceries(description, price),
																				mMilliliters(milliliters)
{

}