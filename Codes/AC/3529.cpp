#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
#include <string> 
#include <map>
#include <iomanip>
#include <list>
#include <stack>
#include <bitset>
#include <cmath>
using namespace std;


typedef int INT;
#define int long long

int f(int n, int m)
{
	int y = 0;
	while (n != 0)
	{
		if (n >= m)
		{
			n -= m;
			y += m;
		}
		else
		{
			y += n;
			n = 0;
		}

		if (n > 9)
			n -= n / 10;
	}
	return y;
}



INT main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	
	int h = n / 2 + n % 2;

	int l = 0, r = n;
	while (l + 1 < r)
	{
		int m = (l + r) / 2;
		if (f(n, m) < h)
			l = m;
		else
			r = m;
	}

	cout << r;


	return 0;
}