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

#ifndef PA3_FOOD_H
#define PA3_FOOD_H


#include "Groceries.h"

class Food : public Groceries
{
public:

	/*
	 * Pre: food class
	 * Post: create food object
	 * Purpose: constructor for food class
	 */
	Food(double grams = 0.0, double price = 0.0, std::string description = " ");

	/*
	 * Pre: food object
	 * Post: return mGrams
	 * Purpose: inform user of mass of food object
	 */
	virtual const double &getGrams() const = 0;

protected:
	double mGrams;
};


#endif //PA3_FOOD_H
