// Bai17_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	
	cout << "Nhap sotien:"; 
	cout << "Nhap soto:"; 

	int menhgia, soto, soto500, soto200, soto100, soto50, soto20, soto10, soto5, soto1;
	cout << " so to can rut ra:\n ";
	cin >> menhgia;
	soto500 = menhgia / 500;
	menhgia = menhgia % 500; // sotien = sotien - soto 500 * 500 HOAC sotien -= soto 500 * 500;
	cout << "|\t soto 500 la \t" << soto500 << "to\n";

	soto200 = menhgia / 200;
	menhgia = menhgia % 200;
	cout << "|\t soto 200 la \t" << soto200 << "to\n";

	soto100 = menhgia / 100;
	menhgia = menhgia % 100;
	cout << "|\t soto 100 la \t" << soto100 << "to\n";

	soto50 = menhgia / 50;
	menhgia = menhgia % 50;
	cout << "|\t soto 50 la \t" << soto50 << "to\n";

	soto20 = menhgia / 20;
	menhgia = menhgia % 20;
	cout << "|\t soto 20 la \t" << soto20 << "to\n";

	soto10 = menhgia / 10;
	menhgia = menhgia % 10;
	cout << "|\t soto 10 la \t" << soto10 << "to\n";

	soto5 = menhgia / 5;
	menhgia = menhgia % 5;
	cout << "|\t soto 5 la \t" << soto5 << "to\n";

	soto1 = menhgia / 1;
	menhgia = menhgia % 1;
	cout << "|\t soto 1 la \t" << soto1 << "to\n";


}

