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

#ifndef PA3_FRUITJUICE_H
#define PA3_FRUITJUICE_H


#include "Beverage.h"

class FruitJuice : public Beverage
{
public:

	/*
	 * Pre: fruitjuice class
	 * Post: creates fruitjuice object
	 * Purpose: constructor for fruitjuice class
	 */
	FruitJuice(std::string flavor = " ", double milliliters = 0.0, double price = 0.0, std::string description = " ");

	/*
	 * Pre: fruitjuice object
	 * Post: returns mFlavor
	 * Purpose: inform user of fruitjuice flavor
	 */
	const std::string &getFlavor() const;

	/*
	 * Pre: fruitjuice object
	 * Post: returns mMilliliters
	 * Purpose: inform user of fruitjuice volume
	 */
	const double &getMilliliters() const;

	/*
	 * Pre: fruitjuice object
	 * Post: returns mPrice
	 * Purpose: inform user of fruitjuice price
	 */
	const double &getPrice() const;

	/*
	 * Pre: fruitjuice object
	 * Post: returns mDescription
	 * Purpose: inform user of fruitjuice description
	 */
	const std::string &getDescription() const;

private:
	std::string mFlavor;
};


#endif //PA3_FRUITJUICE_H
