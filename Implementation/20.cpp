// _6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b)
	{
		swap(a, b);
	}
	int r = 1;
	while (b - a != 1 || b % 2)
	{
		r++;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
	}
	if (1 << r == n)
	{
		cout << "Final!\n";
	}
	else
	{
		cout << r << endl;
	}
	return 0;
}
