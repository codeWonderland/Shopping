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

#ifndef PA3_WATER_H
#define PA3_WATER_H


#include "Beverage.h"

class Water : public Beverage
{
public:

	/*
	 * Pre: water class
	 * Post: creates water object
	 * Purpose: constructor for water class
	 */
	Water(bool carbonated = false, double milliliters = 0.0, double price = 0.0, std::string description = " ");

	/*
	 * Pre: water object
	 * Post: returns mCarbonated
	 * Purpose: inform user if water is carbonated
	 */
	const bool &getCarbonated() const;

	/*
	 * Pre: water object
	 * Post: returns mMilliliters
	 * Purpose: inform user of water's volume
	 */
	const double &getMilliliters() const;

	/*
	 * Pre: water object
	 * Post: returns mPrice
	 * Purpose: inform user of water price
	 */
	const double &getPrice() const;

	/*
	 * Pre: water object
	 * Post: returns mDescription
	 * Purpose: inform client of water description
	 */
	const std::string &getDescription() const;

private:
	bool mCarbonated;
};


#endif //PA3_WATER_H
