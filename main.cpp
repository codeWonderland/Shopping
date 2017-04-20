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

#include <iostream>
#include "ShoppingCart.h"

int main()
{
	//define variables
	bool done = false;
	ShoppingCart *myCart = new ShoppingCart();
	int choice;

	//while we aren't done we need to show the user what they have
	//in their cart then give them options to modify it
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
				if (myCart->getNumItems() != 0)
				{
					myCart->displayList();
					std::cout << "Input the number of the item to remove: ";
					std::cin >> choice;
					myCart->removeItem(choice);
				}
				break;
			case 3:
				break;
			case 4:
				std::cout << "Your total bill is currently $" << myCart->getTotalCost() << std::endl;
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
	//leave no memory leaks
	delete myCart;
}