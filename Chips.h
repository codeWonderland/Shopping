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

#ifndef PA3_CHIPS_H
#define PA3_CHIPS_H


#include "Food.h"

class Chips : public Food
{
public:

	/*
	 * Pre: chips class
	 * Post: creates chips object
	 * Purpose: constructor for chips class
	 */
	Chips(std::string flavor, double grams = 0, double price = 0, std::string description = " ");

	/*
	 * Pre: chips object
	 * Post: returns mFlavor
	 * Purpose: inform user of chips flavor
	 */
	const std::string &getFlavor() const;

	/*
	 * Pre: chips object
	 * Post: returns mGrams
	 * Purpose: inform user of chips mass
	 */
	const double &getGrams() const;

	/*
	 * Pre: chips object
	 * Post: returns mPrice
	 * Purpose: inform user of chips price
	 */
	const double &getPrice() const;

	/*
	 * Pre: chips object
	 * Post: returns mDescription
	 * Purpose: inform user of chips description
	 */
	const std::string &getDescription() const;

private:
	std::string mFlavor;
};


#endif //PA3_CHIPS_H
