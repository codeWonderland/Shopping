//
// Created by Alice Easter on 4/13/17.
//

#include "ShoppingCart.h"


ShoppingCart::ShoppingCart()
{

}

int ShoppingCart::getNumItems()
{
	return (int)mGroceryList.size();
}

double ShoppingCart::getTotalCost()
{
	return mCost;
}

void ShoppingCart::displayList()
{
	if(mGroceryList.size() != 0)
	{
		for (int i = 0; i < mGroceryList.size(); i++)
		{
			std::cout << i + 1 << " " << mGroceryList[i].getDescription() << " " << mGroceryList[i].getPrice()
					  << std::endl << std::endl;
		}
	}

	else
	{
		std::cout << "Welcome to DayMart! Your cart is empty! Let's change that!" << std::endl;
	}
}

void ShoppingCart::addItem()
{
	int choice, numItems = 0;
	std::string flavor, description, shape;
	char carbonated;
	double grams, milliliters, price;
	Groceries *newItem;
	std::cout << "This is what's available:" << std::endl
			  << "1. Chips" << std::endl
			  << "2. Fruit Juice" << std::endl
			  << "3. Pasta" << std::endl
			  << "4. Water" << std::endl
			  << "Type the number of the item you would like: ";
	std::cin >> choice;
	switch(choice)
	{
		case 1:
			std::cout << "What kind of chips would you like: ";
			std::cin >> description;
			std::cout << "What flavor did you say those were: ";
			std::cin >> flavor;
			std::cout << "How much do those run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the mass in grams: ";
			std::cin >> grams;

			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			newItem = new Chips(flavor, grams, price, description);
			break;

		case 2:
			std::cout << "What kind of fruit juice would you like: ";
			std::cin >> description;
			std::cout << "What flavor did you say that is: ";
			std::cin >> flavor;
			std::cout << "How much does that run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the volume in milliliters: ";
			std::cin >> milliliters;

			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			newItem = new FruitJuice(flavor, milliliters, price, description);
			break;

		case 3:
			std::cout << "What kind of pasta would you like: ";
			std::cin >> description;
			std::cout << "What shape is that: ";
			std::cin >> shape;
			std::cout << "How much does that run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the mass in grams: ";
			std::cin >> grams;

			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			newItem = new Pasta(shape, grams, price, description);
			break;

		case 4:
			std::cout << "What kind of would would you like: ";
			std::cin >> description;
			std::cout << "Is that carbonated (Y/n): ";
			std::cin >> carbonated;
			std::cout << "How much does that run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the volume in milliliters: ";
			std::cin >> milliliters;

			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			newItem = new Water((toupper(carbonated) == 'Y'), milliliters, price, description);
			break;

		default:
			std::cout << "Oi! That wasn't an option!" << std::endl;
			break;
	}

	if (choice > 0 && choice < 5)
	{
		for (int i = 0; i < numItems; i++)
		{
			mGroceryList.emplace_back(newItem);
			mCost += newItem->getPrice();
		}
	}

	else
	{
		addItem();
	}
}

void ShoppingCart::removeItem(int itemIndex)
{
	mGroceryList.erase(mGroceryList.begin() + itemIndex - 1);

	mGroceryList.shrink_to_fit();
}

void ShoppingCart::emptyCart()
{
	while(mGroceryList.size() != 0)
	{
		removeItem((int)mGroceryList.size() - 1);
	}
}

ShoppingCart::~ShoppingCart()
{
	emptyCart();
}
