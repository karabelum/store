#pragma once
#include <string>

struct product {
	std::string name;
	int number = 0;
	int price;
};
void printProd(product& prod);
int fullPrice(product& prod);
void sell(product& prod, int num);