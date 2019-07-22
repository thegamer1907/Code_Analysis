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
	set<int> rem;
	for(int i = 0; i < m; ++i)
	{
		cin >> a[i];
		a[i]--;
		rem.insert(a[i]);
	}
	int l = 0,r = k-1;
	auto it = rem.begin();
	int cnt = 0;
	while(l < n && r < n && (it != rem.end()))
	{
		int tmpcnt = 0;
		while(*it >= l && *it <= r && (it != rem.end()))
		{
			it = rem.erase(it);
			tmpcnt++;
		}
		//~ cout << tmpcnt << " ";
		if(tmpcnt == 0) r += k;
		else
		{
			r += tmpcnt;
			cnt++;
		}
		if(r >= n)
		{
			r = n-1;
			tmpcnt = 0;
			while(*it >= l && *it <= r && (it != rem.end()))
			{
				it = rem.erase(it);
				tmpcnt++;
			}
			if(tmpcnt > 0)
			cnt++;
			break;
		}
	}
	cout << cnt ;
}