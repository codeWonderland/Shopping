//
// Created by Alice Easter on 4/15/17.
//

#ifndef PA3_CHIPS_H
#define PA3_CHIPS_H


#include "Food.h"

class Chips : public Food
{
public:
	Chips(std::string flavor, double grams = 0, double price = 0, std::string description = " ");

	const std::string &getFlavor() const;

	const double &getGrams() const;

	const double &getPrice() const;

	const std::string &getDescription() const;

private:
	std::string mFlavor;
};


#endif //PA3_CHIPS_H
