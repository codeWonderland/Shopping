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
	ShoppingCart();

	int getNumItems();

	double getTotalCost();

	void displayList();

	void addItem();

	void removeItem(int itemIndex);

	void emptyCart();

	~ShoppingCart();
private:
	std::vector<Groceries*> mGroceryList;
	double mCost = 0.0;
};


#endif //PA3_SHOPPINGCART_H
