#include <stdio.h>
#include <bitset>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <string.h>
#include <string>
#include <iostream>
#include <stack>
#include <ctype.h>
#include <algorithm>
#include <deque>
#include <functional>
#include <math.h>
#include <stdlib.h>

#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pll pair<ll,ll>

using namespace std;

const int N = 105;

int n, m;
vector<int> b, g;

int main()
{
	//freopen("", "r", stdin);
	//freopen("", "w", stdout);
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		b.push_back(m);
	}
	int x = 0;
	scanf("%d", &m);
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		g.push_back(x);
	}
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
	int ans = 0;
	for(int i = 0; i < b.size(); i++)
	{
		for(int j = 0; j < g.size(); j++)
		{
			if(abs(b[i] - g[j]) <= 1)
			{
				ans++;
				g[j] = 1e5;
				b[i] = -1e5;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}