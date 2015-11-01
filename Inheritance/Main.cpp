#include <iostream>
#include "CustomerData.h"


int main(){
	PreferredCustomer pre;
	int i;


	std::cout << "Please enter your name:" << std::endl;
	std::cin.getline (pre.customerName, 128);

	std::cout << "Please enter how much you spent:" << std::endl;
	std::cin >> pre.purchasesAmount;

	i = pre.purchasesAmount;

	pre.checkDiscount(i);
	pre.discountLevel = pre.checkDiscount(i);
	std::cout << pre.customerName << " you are getting a " << pre.discountLevel << "% discount" << std::endl;

	system("pause");
	return 0;
}

//if (i >= 500 && i < 1000) { return 5; }
//else if (i >= 1000 && i < 1500) { return 6; }
//else if (i >= 1500 && i < 2000) { return 7; }
//else if (i >= 2000) { return 10; }
//else { return 0; }