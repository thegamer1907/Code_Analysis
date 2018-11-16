#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
using namespace std;

pair<int,int> a[100005];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i].first >> a[i].second;
	}

	int li = a[0].first, ans = 1;
	for (int i = 1; i < n; ++i)
	{
		if (a[i].first-a[i].second>li)
		{
			++ans;
			li = a[i].first;
		}
		else
		{
			if (i+1==n || a[i].first + a[i].second < a[i + 1].first)
			{
				++ans;
				li = a[i].first + a[i].second;
			}
			else li = a[i].first;
		}
	}

	cout << ans;
	return 0;
}