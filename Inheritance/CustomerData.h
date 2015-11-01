#pragma once


class CustomerData {
public:
	char customerName[128];
};

class PreferredCustomer : public CustomerData {
public:
	int discountLevel;
	int purchasesAmount;

	int checkDiscount(int i);

};
