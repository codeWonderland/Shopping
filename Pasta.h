//
// Created by Alice Easter on 4/13/17.
//

#ifndef PA3_PASTA_H
#define PA3_PASTA_H


#include "Food.h"

class Pasta : public Food
{
public:

	Pasta(std::string shape = " ", double grams = 0, double price = 0, std::string description = " ");

	const std::string &getShape() const;

	const double &getGrams() const;

	const double &getPrice() const;

	const std::string &getDescription() const;



private:
	std::string mShape;
};


#endif //PA3_PASTA_H
