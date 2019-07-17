#include<bits/stdc++.h>
using namespace std;

#define int long long

const int mod = 1e9+7;

int binpow(int a,int b)
{
	int res = 1;
	while(b)
	{
		if(b&1) res *= a;
		a *= a;
		b >>= 1;
	}
	return res;
}

int modpow(int a,int b)
{
	int res = 1;
	while(b)
	{
		if(b&1)
		{
			res = (res*a)%mod;
		}
		a = (a*a)%mod;
		b >>= 1;
	}
	return res%mod;
}

int sti(string s)
{
	int res = 0;
	for(int i = 0;i < (int)s.length();--i)
	{
		res*=10;
		res += (s[i] - '0');
	}
	return res;
}
signed main()
{
	ios_base::sync_with_stdio(false);
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> a(m);
	for(int i = 0; i < m ; ++i)
	{
		cin >> a[i];
		a[i]--;
	}
	
	int i = 0;
	int cnt = 0;
	int tmpcnt = 0;
	// until all are discarded
	while(i < m)
	{
		// find the right border
		int r = ((a[i] - tmpcnt)/k + 1)*k-1 + tmpcnt;
		while(i < m && a[i] <= r)
		{
			tmpcnt++;
			++i;
		}
		cnt++;
	}
	
	cout << cnt;
}