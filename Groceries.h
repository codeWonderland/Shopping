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

#ifndef PA3_GROCERIES_H
#define PA3_GROCERIES_H


#include <string>
#include <iostream>
#include <iomanip>

class Groceries
{
public:

	/*
	 * Pre: A defined groceries class
	 * Post: create groceries object
	 * Purpose: create groceries object
	 */
	Groceries(std::string description = " ", double price = 0.0);

	/*
	 * Pre: a groceries object
	 * Post: returns object mDescription
	 * Purpose: to obtain the groceries object description
	 */
	virtual const std::string &getDescription() const = 0;

	/*
	 * Pre: a groceries object
	 * Post: returns object mPrice
	 * Purpose: to obtain the groceries object price
	 */
	virtual const double &getPrice() const = 0;

	/*
	 * Pre: a groceries object
	 * Post: destroys groceries object
	 * Purpose: destructor for groceries object
	 */
	virtual ~Groceries();

protected:
	std::string mDescription;
	double mPrice;
};


#endif //PA3_GROCERIES_H
