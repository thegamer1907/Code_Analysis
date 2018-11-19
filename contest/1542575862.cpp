#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#include <stack>
#include<queue>
#include <exception>
#include <functional>
#include <bitset>
#include <iomanip>

typedef long long ll;
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE 
	FILE *file;
	file = new FILE;
	freopen_s(&file, "in.txt", "r", stdin);
#endif // !ONLINE_JUDGE
	int n, k;
	cin >> n >> k;
	vector<int> v(1<<k);
	for (size_t i = 0; i < n; i++)
	{
		int buf = 0;
		for (size_t j = 0; j < k; j++)
		{
			int a;
			cin >> a;
			buf += a << j;
		}
		v[buf]++;
	}
	if (v[0] > 0)
	{
		cout << "YES";
		return 0;
	}
	for (size_t j = 0; j < 1 << k; j++)
	{
		for (size_t i = 0; i < 1 << k; i++)
		{
			if (v[i]>0 && v[j]>0)
				if (i != j)
				{
					int ones = ((1 << k) - 1);
					int left = i^j;
					if (left == ones || (i&j) == 0)
					{
						cout << "YES";
						return 0;
					}
				}
		}
	}
	cout << "NO";
}