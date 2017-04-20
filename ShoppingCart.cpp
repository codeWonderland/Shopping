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
			std::cout << i + 1 << ". " << mGroceryList[i]->getDescription() << " $" << mGroceryList[i]->getPrice()
					  << std::endl << std::endl;
		}
	}

	else
	{
		std::cout << "Welcome to DayMart! Your cart is empty! Let's change that!" << std::endl;
	}

	std::cout << std::endl;
}

void ShoppingCart::addItem()
{
	//define all necessary variables
	int choice, numItems = 0;
	std::string flavor, description, shape;
	char carbonated;
	double grams, milliliters, price;

	//show the client all options
	std::cout << "This is what's available:" << std::endl
			  << "1. Chips" << std::endl
			  << "2. Fruit Juice" << std::endl
			  << "3. Pasta" << std::endl
			  << "4. Water" << std::endl
			  << "Type the number of the item you would like: ";
	std::cin >> choice;

	//select item based off of what the client asked for
	switch(choice)
	{
		case 1:
			std::cout << "What kind of chips would you like: ";
			std::cin.ignore();
			std::getline(std::cin, description);
			std::cout << "What flavor did you say those were: ";
			std::cin.ignore();
			std::getline(std::cin, flavor);
			std::cout << "How much do those run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the mass in grams: ";
			std::cin >> grams;

			//determine the number of times to add the item to the list
			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			//add new grocery with the specifications to the list
			for (int i = 0; i < numItems; i++)
			{
				mGroceryList.push_back(new Chips(flavor, grams, price, description));
				mCost += price;
			}

			break;

		case 2:
			std::cout << "What kind of fruit juice would you like: ";
			std::cin.ignore();
			std::getline(std::cin, description);
			std::cout << "What flavor did you say that is: ";
			std::cin.ignore();
			std::getline(std::cin, flavor);
			std::cout << "How much does that run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the volume in milliliters: ";
			std::cin >> milliliters;

			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			for (int i = 0; i < numItems; i++)
			{
				mGroceryList.push_back(new FruitJuice(flavor, milliliters, price, description));
				mCost += price;
			}
			break;

		case 3:
			std::cout << "What kind of pasta would you like: ";
			std::cin.ignore();
			std::getline(std::cin, description);
			std::cout << "What shape is that: ";
			std::cin.ignore();
			std::getline(std::cin, shape);
			std::cout << "How much does that run: $";
			std::cin >> price;
			std::cout << "Look at the packaging, what is the mass in grams: ";
			std::cin >> grams;

			while (numItems < 1)
			{
				std::cout << "How many packages would you like: ";
				std::cin >> numItems;
			}

			for (int i = 0; i < numItems; i++)
			{
				mGroceryList.push_back(new Pasta(shape, grams, price, description));
				mCost += price;
			}
			break;

		case 4:
			std::cout << "What kind of would would you like: ";
			std::cin.ignore();
			std::getline(std::cin, description);
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

			for (int i = 0; i < numItems; i++)
			{
				mGroceryList.push_back(new Water((toupper(carbonated) == 'Y'), milliliters, price, description));
				mCost += price;
			}
			break;

		default:
			std::cout << "Oi! That wasn't an option!" << std::endl;
			break;
	}

	//if someone didn't select an option in the qualifications then we call the function again
	if (choice <= 0 || choice >= 5)
	{
		addItem();
	}
}

void ShoppingCart::removeItem(int itemIndex)
{
	// if the list is not empty we want to delete the data then remove the index, then we should shrink the list
	if (mGroceryList.size() != 0)
	{
		delete mGroceryList[itemIndex - 1];
		mGroceryList.erase(mGroceryList.begin() + itemIndex - 1);

		mGroceryList.shrink_to_fit();
	}
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
	//empty the cart before destruction to remove memory leaks
	emptyCart();
}
