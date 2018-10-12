#include<iostream>
#include<algorithm>
#include<iomanip>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <new>
#include <cmath>
#include<fstream>
using namespace std;
#define Precision(i) cout << fixed << setprecision(i)
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <long long, long long> pll;

const ll MAXN = 1e6 + 1e3, mod = 1e9 + 7, inf = 1e9;
ll n, m, x1, d, z , t, sum,x,y, maxi,mini, a[MAXN], ans, dp[MAXN];
string s;
vector < ll > v[MAXN];
int main()
{
	//ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	ll ptr = 1;
	for (int i = 1; i <= n ;i++)
	{
		cin >> a[i];

		dp[i] = dp[i-1] + (a[i] == 0);
	}
	for (int i = 1;i <= n ;i++)
	{
		while (ptr <= n && dp[ptr] - dp[i-1] <= m)
		{
			ptr++;
		}
		if (ans < ptr - i)
		{
			ans = ptr - i;
			t = i;
		}
		ptr--;
	}
	for (int i = t; i < t + ans; i++) a[i] = 1;
	cout << ans << endl;
	for (int i = 1; i <= n; i++) cout << a[i] << ' ';
}
