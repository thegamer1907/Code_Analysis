
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
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <long long, long long> pll;
const ll N = 1e6 + 100, MOD = 1e9 + 7, INF = 1e15, SQ = 350, LOG = 20;
int n, m, x1, x2, d, z , t, sum,y, y2, maxi,mini, ans, ptr, x, dp[N], a[N], k;
int main()  
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ans = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > a[i-1]) ans++;
		else
		{
			x = max(ans, x);
			ans = 1;
		}
	} 
	x = max(ans, x);
	cout << x;
}
