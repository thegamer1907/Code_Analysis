#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <map>
#include <deque>
#include <set>

#pragma warning(disable:4996)

using namespace std;

int n, a, ans;
vector <int> v;

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
#endif
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a);
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	ans = n;
	a = n / 2;
	for (int i = 0; i < n / 2; ++i)
	{
		for (;;)
		{
			if (v[i] * 2 <= v[a])
			{
				ans--;
				a++;
				break;
			}
			else
			{
				a++;
			}
			if (a == n)
			{
				break;
			}
		}
		if (a == n)
		{
			break;
		}
	}
	printf("%d", ans);
	return 0;
}