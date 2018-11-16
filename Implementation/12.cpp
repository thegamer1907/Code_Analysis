#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <math.h>
#define int long long

using namespace std;

signed main()
{
	int n, a, b;
	cin >> n >> a >> b;
	for (int i = 1; i < n; i++)
	{
		int sz = (1 << i);
		for (int j = 1; j < n; j += sz)
		{
			if ((j <= a) && (j <= b) &&(j + sz > a) && (j + sz > b))
			{
				if (sz >= n)
					cout << "Final!";
				else
					cout << i;
 				return 0;
			}
		}
	}
}