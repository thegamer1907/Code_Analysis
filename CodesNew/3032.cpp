#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#define ll long long
#define MAX (int)1e6+12
#define pii pair<int,int>
using namespace std;
const int MX = 1e6 + 20;

int k;
ll ans;
string s;
int f[MAX];
int cnt[MAX];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);	
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> k >> s;
	for (int i = 0; i < s.size(); i++)
	{
		f[i + 1] = f[i] + (s[i] == '1');
	}
	
	cnt[0] = 1;
	ans = 0;
	for (int i = 1; i <= s.size(); i++)
	{
		if (f[i] >= k) ans += cnt[f[i] - k];
		cnt[f[i]]++;
	}
	
	cout << ans;

	return 0;
}
