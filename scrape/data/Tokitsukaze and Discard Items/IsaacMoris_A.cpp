#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll n, x, m, k, ans, t, lastt, kk;
vector<ll> v ;

int main()
{
	cin >> n >> m >> k;
	kk = k;
	while(m--)
	{
		scanf("%lld", &x);
		v.push_back(x);
	}
	sort(v.rbegin(), v.rend());
	while(!v.empty())
	{
		int cnt = 0;
		while(!v.empty() && v.back() - lastt <= k)
		{
			v.pop_back();
			cnt++;
			t++;
		}
		lastt = t;
		if(cnt)
		{
			ans++;
			while(true)
			{
				ll newcnt = 0;
				while(!v.empty() && v.back() - lastt <= k)
					newcnt++, t++, v.pop_back();
				if(newcnt)
					ans++;
				else
					break;
				lastt = t;
			}
		}
		else
		{
			if(!v.empty())
				k = v.back()-lastt;
			k = k / kk * kk;
			if(k<v.back()-lastt)
                k+=kk;
		}
	}
	cout << ans;
}