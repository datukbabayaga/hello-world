// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void star()
{
	cout << "This is lab 4" << endl;
	cout << "<yourname>, Do Exercise" << endl;
}


int main()
{
	star();
	float price = 9.90,totalprice;
	int quantity, DISC = 10;

	cout << "Quantity :" << endl;
	cin >> quantity;
	totalprice = (price*quantity)*(100 - DISC) / 100.00;
	cout << "Total price is : RM " << totalprice << endl;
	
    return 0;
}

