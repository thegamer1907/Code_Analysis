#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define II pair<int, int>
#define x first
#define y second
#define mp make_pair
using namespace std;
const int N = 1e6 + 69;
string s;
int n, res;
ll Pow[N], Hash[N], mod = 1e9 + 7;
vector<int> len;
ll get(int l, int r)
{
	return (Hash[r] - Hash[l - 1] * Pow[r - l + 1] + mod * mod) % mod;
}
int check(int m)
{
	for(int i = 2; i <= n - m; i ++)
		if(get(1, m) == get(i, i + m - 1)) return 1;
	return 0;
}
int main()
{
//	freopen("128B.inp", "r", stdin);
//	freopen("128B.out", "w", stdout);
	cin >> s;
	n = s.length();
	s = ' ' + s;
	Pow[0] = 1;
	for(int i = 1; i <= n; i ++) Pow[i] = Pow[i - 1] * 26 % mod;
	for(int i = 1; i <= n; i ++) Hash[i] = (Hash[i - 1] * 26 + s[i]) % mod;
	for(int i = 1; i < n; i ++){
		if(get(1, i) == get(n - i + 1, n))	len.pb(i);
	}
	if(len.size() == 0){
		cout << "Just a legend";
		return 0;
	}
	int l = 0, r = len.size() - 1;
	while(l < r){
		int m = (l + r + 1) / 2;
		if(check(len[m])) l = m;
			else r = m - 1;
	}
	if(check(len[l]) == 0) cout << "Just a legend";
		else cout << s.substr(1, len[l]);
}