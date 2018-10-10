#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll n, d, l, m, r, ans = 0;
	cin >> n >> d;
	vector <pair <ll, ll> > v(n);
	vector <ll> s(n);
	
	for (int i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;
		
	sort(v.begin(), v.end());
	
	for (int i = 0; i < n; i++)
		if (i)
			s[i] = s[i-1]+v[i].second;
		else
			s[i] = v[i].second;
			
	for (int i = 0; i < n; i++)
	{
		l = i;
		r = n;
		
		while (l < r-1)
		{
			m = (l+r)/2;
			
			if (v[m].first-v[i].first >= d)
				r = m;
			else
				l = m;
		}
		
		if (i)
			ans = max(ans, s[l]-s[i-1]);
		else
			ans = max(ans, s[l]);
	}
	
	cout << ans;
}