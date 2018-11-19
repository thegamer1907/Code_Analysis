#include <bits/stdc++.h> 

using namespace std;

const int N = 1E5 + 10;

bool ans;
int a[N], n, k;

int main()
{
	scanf("%d%d", &n, &k);
	if (n==1)
	{
		bool flag = 1;
		for (int i = 1; i <= k; i++)
		{
			int x; scanf("%d", &x);
			if (x==1)flag=0;
		}
		return puts(flag?"YES":"NO");
	}
	for (int i = 1; i <= n; i++)
	{
		int t = 0;
		for (int x, i = 1; i <= k; i++)
			scanf("%d", &x), t = t * 2 + x;
		for (int i = 1; i <= a[0]; i++)
			if ((a[i] & t) == 0) ans = 1;
		bool flag = 0;
		for (int i = 1; i <= a[0]; i++)
			if (a[i] == t) flag = 1;
		if (!flag) a[++a[0]] = t;
	}
	return puts(ans ? "YES" : "NO"), 0;
}
