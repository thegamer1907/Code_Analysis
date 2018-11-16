#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
bool f(int x, int y, int z)
{
	return (x + y) > z && (x + z) > y && (z + y) > x;
}
bool f1(int x, int y, int z)
{
	return (x + y) >= z && (x + z) >= y && (z + y) >= x;
}

const int N = 30500;
int a[N];

int main()
{
	/*
8 4
1 2 1 2 1 2 1
*/

	int n, m, k = 0;
	cin >> n >> m;
	vector <int> v;
	for(int i = 0; i < n - 1; i++)
	{
		cin >> a[i];
	}
	a[n - 1] = 1;
	for(int i = 0; i <= n - 1; i += a[i])
	{
		if(i + 1 == m)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
/*
120 104
41 15 95 85 34 11 25 42 65 39 77 80 74 17 66 73 21 14 36 63 63 79 45 24 65 7 63 80 51 21 2 19 78 28 71 2 15 23 17 68 62 18 54 39 43 70 3 46 34 23 41 65 32 10 13 18 10 3 16 48 54 18 57 28 3 24 44 50 15 2 20 22 45 44 3 29 2 27 11 2 12 25 25 31 1 2 32 4 11 30 13 16 26 21 1 13 21 8 15 5 18 13 5 15 3 8 13 6 5 1 9 7 1 2 4 1 1 2 1 */