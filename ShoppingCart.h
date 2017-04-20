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

#ifndef PA3_SHOPPINGCART_H
#define PA3_SHOPPINGCART_H


#include <vector>
#include <iostream>
#include <iomanip>
#include "Chips.h"
#include "FruitJuice.h"
#include "Pasta.h"
#include "Water.h"

class ShoppingCart
{
public:

	/*
	 * Pre: a ShoppingCart class
	 * Post: creates ShoppingCart object
	 * Purpose: to create a modifiable ShoppingCart object
	 */
	ShoppingCart();

	/*
	 * Pre: a shoppingcart object
	 * Post: returns size of mGroceryList
	 * Purpose: to find out how many groceries are stored in the shopping cart
	 */
	int getNumItems();

	/*
	 * Pre: a shopping cart object
	 * Post: returns mCost
	 * Purpose: to determine how much one has spent on groceries
	 */
	double getTotalCost();

	/*
	 * Pre: a shopping cart object
	 * Post: displays contents of mGroceryList
	 * Purpose: to display what is in one's shopping cart
	 */
	void displayList();

	/*
	 * Pre: a shopping cart object
	 * Post: adds groceries object of user's choice to the mGroceryList
	 * Purpose: ensure that when adding an object to the shopping
	 * 		cart it will actually be able to go in the shopping cart
	 */
	void addItem();

	/*
	 * Pre: shopping cart object
	 * Post: removes item from mGroceryList
	 * Purpose: to remove item from one's shopping cart
	 */
	void removeItem(int itemIndex);

	/*
	 * Pre: shopping cart object
	 * Post: clears all items from mGroceryList
	 * Purpose: empty the user's shopping cart
	 */
	void emptyCart();

	/*
	 * Pre: shopping cart object
	 * Post: destroys shopping cart object
	 * Purpose: deconstructor for shopping cart class
	 */
	~ShoppingCart();

private:
	std::vector<Groceries*> mGroceryList;
	double mCost = 0.0;
};


#endif //PA3_SHOPPINGCART_H
