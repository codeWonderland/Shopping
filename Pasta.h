//
// Created by Alice Easter on 4/13/17.
//

#ifndef PA3_PASTA_H
#define PA3_PASTA_H


#include "Food.h"

class Pasta : public Food
{
public:

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	Pasta(std::string shape = " ", double grams = 0, double price = 0, std::string description = " ");

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const std::string &getShape() const;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const double &getGrams() const;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const double &getPrice() const;

	/*
	 * Pre:
	 * Post:
	 * Purpose:
	 */
	const std::string &getDescription() const;



private:
	std::string mShape;
};


#endif //PA3_PASTA_H
