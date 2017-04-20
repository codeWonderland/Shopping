//
// Created by Alice Easter on 4/13/17.
//

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
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	ShoppingCart();

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	int getNumItems();

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	double getTotalCost();

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	void displayList();

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	void addItem();

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	void removeItem(int itemIndex);

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	void emptyCart();

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	~ShoppingCart();

private:
	std::vector<Groceries*> mGroceryList;
	double mCost = 0.0;
};


#endif //PA3_SHOPPINGCART_H
