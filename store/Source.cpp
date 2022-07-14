#include <iostream>
#include "Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	product num1 = { "Bread" , 40, 23 };
	product num2 = { "Eggs", 100, 67 };
	product num3 = { "Milk", 50, 45 };
	
	cout << "List: \n1.";
	printProd(num1);
	cout << "Total cost -> " << fullPrice(num1) << endl;
	sell(num1, 10);
	cout << "\nAfter purchase -> " << num1.number << " pieces.\n";
	cout << "Total cost of remaining products -> " << fullPrice(num1) << endl;
	cout << "\n2.";
	printProd(num2);
	cout << "Total cost -> " << fullPrice(num2) << endl;
	sell(num2, 9);
	cout << "\nAfter purchase -> " << num2.number << " pieces.\n";
	cout << "Total cost of remaining products -> " << fullPrice(num2) << endl;
	cout << "\n3.";
	printProd(num3);
	cout << "Total cost -> " << fullPrice(num3) << endl;
	sell(num3, 15);
	cout << "\nAfter purchase -> " << num3.number << " pieces.\n";
	cout << "Total cost of remaining products -> " << fullPrice(num3) << endl;

	return 0;
}
