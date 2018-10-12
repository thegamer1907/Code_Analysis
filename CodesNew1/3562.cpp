#include <iostream>
#include <set>
#include <functional>
#include <cmath>
#include <algorithm>

using namespace std;

multiset <int, less<int>> S;
int maxim = -1, maxi=-1;
int n, m, x;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		S.insert(x);
		maxim = max(maxim, x);
	}
	for (int i = 1; i <= m; i++)
	{
		int y = *(S.begin());
		S.erase(S.begin());
		S.insert(y+1);
	}
	for (auto i : S)
		if (i > maxi)
			maxi = i;
	cout << maxi << " " << maxim+m;
	return 0;
}