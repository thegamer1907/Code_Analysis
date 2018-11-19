#pragma GCC optimaze("Ofast");
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("unroll-loops")
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<math.h>
#include<algorithm>
#include<time.h>
#include<stdio.h>
#include<stack>
#include<queue>
#include<deque>
#include<fstream>
#include<unordered_map>
#include<bitset>
#include<cstdio>
#include<complex>


using namespace std;

/*
_______^(0,0)^___________^(0,0)^_________^(0,0)^____________________^(0,0)^_________^(0,0)^___________^(0,0)^_______
___^(0,0)^^(0,0)^______^(0,0)^_______^(0,0)^^(0,0)^______________^(0,0)^^(0,0)^_______^(0,0)^______^(0,0)^^(0,0)^___
__^(0,0)^__^(0,0)^____^(0,0)^_______^(0,0)^  ^(0,0)^____________^(0,0)^  ^(0,0)^_______^(0,0)^____^(0,0)^__^(0,0)^__
_^(0,0)^____^(0,0)^__^(0,0)^________^(0,0)^  ^(0,0)^____________^(0,0)^  ^(0,0)^________^(0,0)^__^(0,0)^____^(0,0)^_
_____________________^(0,0)^________^(0,0)^  ^(0,0)^____________^(0,0)^  ^(0,0)^________^(0,0)^_____________________
_____________________^(0,0)^________^(0,0)^  ^(0,0)^____________^(0,0)^  ^(0,0)^________^(0,0)^_____________________
_____________________^(0,0)^________^(0,0)^  ^(0,0)^____________^(0,0)^  ^(0,0)^________^(0,0)^_____________________
______________________^(0,0)^_______^(0,0)^  ^(0,0)^____________^(0,0)^  ^(0,0)^________^(0,0)^_____________________
_______________________^(0,0)^_______^(0,0)^^(0,0)^______________^(0,0)^^(0,0)^________^(0,0)^______________________
________________________^(0,0)^__________^(0,0)^______^(0,0)^_______^(0,0)^__________^(0,0)^________________________
________________________________________________________^(0,0)^_____________________________________________________
______________________________________________________^(0,0)^_______________________________________________________
@lis
*/

const int maxn = 1e5 + 113;
const long long inf = 1e18;
vector<long long> in;
long long dp[maxn][25];
long long znac[maxn];
int gl = 1, gr = 0;
long long val = 0;

void recalc(int l, int r)
{
	while (gl < l)
	{
		znac[in[gl]]--;
		val -= znac[in[gl]];
		gl++;
	}
	while (gl > l)
	{
		gl--;
		val += znac[in[gl]];
		znac[in[gl]]++;
	}
	while (gr < r)
	{
		gr++;
		val += znac[in[gr]];
		znac[in[gr]]++;
	}
	while (gr > r)
	{
		znac[in[gr]]--;
		val -= znac[in[gr]];
		gr--;
	}
}

void rec(int l, int r, int tl, int tr, int k)
{
	if (l > r)
		return;
	int tm = 0;
	int m = (l + r) / 2;
	for (int i = tl; i <= min(tr, m - 1); i++)
	{
		recalc(i + 1, m);
		if (dp[m][k] > dp[i][k - 1] + val)
		{
			tm = i;
			dp[m][k] = dp[i][k - 1] + val;
		}
	}
	rec(l, m - 1, tl, tm, k);
	rec(m + 1, r, tm, tr, k);
}

int main() {
	//freopen("matan.in", "r", stdin);
	//freopen("matan.out", "w", stdout);
	srand(time(NULL));
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//cout.setf(ios::fixed);
	//cout.precision(2);
	int n, k;
	cin >> n >> k;
	in.push_back(0);
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= k; j++)
			dp[i][j] = inf;
	dp[0][0] = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		in.push_back(a);
	}
	in.push_back(0);
	for (int i = 1; i <= k; i++)
		rec(1, n, 0, n, i);
	cout << dp[n][k];
	//system("pause");
}