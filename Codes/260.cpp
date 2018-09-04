#include <iostream>
#include <vector>
#include <stdio.h>
#include <tuple>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstdio>
#include <string>
//#include <stack>
//#include <set>
#include <map>
//#include <complex>
#define INF 1e9 + 2
#define MOD 1e9 + 7

using namespace std;
typedef long long ll;

int a[123455], q;
int bin(int l, int r, int x)
{
	while(l != r)
	{
		int mid = (l + r) / 2;
		if(a[mid] < x)
			l = mid + 1;
		else
			r = mid;
	}
	return l;
}
int main()
{
    //freopen("input.txt", "r", stdin);
 	//freopen("output.txt", "w", stdout);
	//ios::sync_with_stdio(0);
	//cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n;
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	cin >> m;
	for(int i = 1; i <= m; i ++)
	{
		int q;
		cin >> q;
		cout << bin(1, n, q) << '\n';
	}
}

