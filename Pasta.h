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

#ifndef PA3_PASTA_H
#define PA3_PASTA_H


#include "Food.h"

class Pasta : public Food
{
public:

	/*
	 * Pre: pasta class
	 * Post: creates pasta object
	 * Purpose: constructor for pasta class
	 */
	Pasta(std::string shape = " ", double grams = 0, double price = 0, std::string description = " ");

	/*
	 * Pre: pasta object
	 * Post: returns mShape
	 * Purpose: inform user of pasta shape
	 */
	const std::string &getShape() const;

	/*
	 * Pre: pasta object
	 * Post: returns mGrams
	 * Purpose: inform user of pasta mass
	 */
	const double &getGrams() const;

	/*
	 * Pre: pasta object
	 * Post: returns mPrice
	 * Purpose: inform user of pasta price
	 */
	const double &getPrice() const;

	/*
	 * Pre: pasta object
	 * Post:returns mDescription
	 * Purpose: inform user of pasta description
	 */
	const std::string &getDescription() const;



private:
	std::string mShape;
};


#endif //PA3_PASTA_H
