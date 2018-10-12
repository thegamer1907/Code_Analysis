#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <iomanip>
using namespace std;

const long long mod = 1e9 + 7;
int n, k;

const bool comparer(const string &a, const string &b)
{
	return a + b < b + a;
}


void solve()
{
	cin >> n >> k;
	int left = 0;
	int right = 0;
	int now = 0;
	vector<int>a(n);
	for (auto &i : a)
		cin >> i;
	int maxl = -1;
	pair<int, int>bestpair;
	for (; left < n; left++)
	{
		if (left > right)
		{
			right = left;
			now = 0;
		}

		while (right < n && (now < k || a[right] == 1))
		{
			if (a[right] == 0)
				now++;
			right++;
		}

		if (right - left > maxl)
		{
			maxl = right - left;
			bestpair = { left, right };
		}

		if (a[left] == 0)
		{
			now--;
		}
	}
	for (int i = bestpair.first; i < bestpair.second; i++)
	{
		a[i] = 1;
	}
	cout << maxl << endl;
	for (auto &i : a)
		cout << i << " ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	solve();
}