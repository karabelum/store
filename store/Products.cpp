#include "Products.h"
#include <iostream>

void printProd(product &prod) {
	std::cout << "Product òame " << prod.name << std::endl;
	std::cout << "Quantity " << prod.number << std::endl;
	std::cout << "Cost " << prod.price << std::endl;
}
int fullPrice(product& prod) {
	return prod.price * prod.number;
}
void sell(product& prod, int num) {
	prod.number -= num;
}