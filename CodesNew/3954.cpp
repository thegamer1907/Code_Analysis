#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#include <stack>
//#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mp make_pair
ll power(ll x ,ll y)
{
	if (!y)return 1;
	if (y % 2)return x*power(x*x, y / 2);
	return power(x*x, y / 2);
}

int n, q;
ll x, sum[200200];
int  main()
{ 
	scanf("%d%d", &n,&q);
	for (int i = 1; i <= n; i++)
	{
		scanf("%I64d", &x); sum[i] = sum[i - 1] + x;
	}
	ll pre = 0;
	for (int i = 0; i < q; i++)
	{
		if (pre >= sum[n])pre = 0;
		ll t; scanf("%I64d", &t);
		pre += t;
		int tt = lower_bound(sum, sum + n + 1, pre) - sum;
		if (tt > n)printf("%d\n", n);
		else{
			int v = n - tt + (sum[tt] == pre ? 0 : 1);
			printf("%d\n", (v == 0 ? n : v));
		}
	}
	return 0;
}