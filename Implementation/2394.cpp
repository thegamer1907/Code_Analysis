#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
#define pb push_back
#define pd pop_back
typedef long long ll;
typedef long double ld;
int x, y;
int main ()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	if (k > 240)
	{
		cout << 0;
		return 0;
	}
	else 
	{
		for (int i =1 ; i <= n ; i++)
		{
			if (i == n)
			{
				x += (5*n);
				if (x + k > 240)
				{
					cout << n-1;
					return 0;
				}
				else 
				{
					cout << n;
					return 0;
				}
			}
			y = 5*i;
			x += y;
			if (x + k > 240)
			{
				cout << (i - 1);
				return 0;
			}
	}
}
return 0;
}