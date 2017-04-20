/*
Author: Alice Easter
        Class: CSI 240-05
        Assignment: PA 3
Date Assigned: 04/11/17
        Due Date: 04/18/17 12:29 PM
Description:
 		shopping emulation
Certification of Authenticity:
        I certify that this is entirely my own work, except where I have given
        fully-documented references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
        may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of academic
- staff; and/or Communicate a copy of this assignment to a plagiarism checking
- service (which may then retain a copy of this assignment on its database for the
- purpose of future plagiarism checking)
*/

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
