//
// Created by Alice Easter on 4/13/17.
//

#ifndef PA3_FRUITJUICE_H
#define PA3_FRUITJUICE_H


#include "Beverage.h"

class FruitJuice : public Beverage
{
public:

	FruitJuice(std::string flavor = " ", double milliliters = 0.0, double price = 0.0, std::string description = " ");

	const std::string &getFlavor() const;

	const double &getMilliliters() const;

	const double &getPrice() const;

	const std::string &getDescription() const;

private:
	std::string mFlavor;
};


#endif //PA3_FRUITJUICE_H
