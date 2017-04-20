#include <iostream>
#include "ShoppingCart.h"

int main()
{
	bool done = false;
	ShoppingCart *myCart = new ShoppingCart();
	int choice;

	while(!done)
	{
		myCart->displayList();

		std::cout << "Here are your options: " << std::endl;
		std::cout << "1. Add Item" << std::endl;
		std::cout << "2. Remove Item" << std::endl;
		std::cout << "3. Display List" << std::endl;
		std::cout << "4. Display Bill" << std::endl;
		std::cout << "5. Empty Cart" << std::endl;
		std::cout << "6. Quit" << std::endl;
		std::cout << "What would you like to do: ";
		std::cin >> choice;

		switch(choice)
		{
			case 1:
				myCart->addItem();
				break;
			case 2:
				myCart->displayList();
				std::cout << "Input the number of the item to remove: ";
				std::cin >> choice;
				myCart->removeItem(choice);
				break;
			case 3:
				myCart->displayList();
				break;
			case 4:
				std::cout << "Your total bill is currently $" << myCart->getTotalCost();
				break;
			case 5:
				myCart->emptyCart();
				break;
			case 6:
				done = true;
				break;
			default:
				std::cout << "Oi! That isn't an option!" << std::endl;
				break;
		}
	}

	delete myCart;
}