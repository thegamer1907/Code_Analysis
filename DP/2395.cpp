#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
const int MAX_N = 150005;

int n, k;
int h[MAX_N];

int main()
{
	ios::sync_with_stdio(false);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> h[i];
	int minSum = INF, minSumI = 0, currSum = 0;
	for (int i = 0; i < k - 1; i++)
		currSum += h[i];
	for (int l = 0, r = k - 1; r < n; l++, r++)
	{
		currSum += h[r];
		if (l != 0)
			currSum -= h[l - 1];
		if (currSum < minSum)
		{
			minSum = currSum;
			minSumI = l;
		}
	}
	cout << (minSumI + 1) << endl;
}