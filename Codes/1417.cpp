#include <bits/stdc++.h>

using namespace std;

#define sz(c)  (int)(c).size()
#define all(c) ((c).begin()), ((c).end())

typedef long long ll;
typedef pair<int, int> pii;

const int oo = 1e9+7;

const int N = (int)1e5+5;
int x[N];

int main()
{
	
	int n, s;
	scanf("%d %d", &n, &s);
	
	for (int i = 0;i<n; ++i)
		scanf("%d", x+i);
	
	ll st=0, en=n, ans=0, cost=0;
	
	while (st<=en)
	{
		ll md = (st+en)>>1;
		ll co = 0;
		
		vector<ll> v(n);
		
		for (int i = 0;i<n; ++i)
			v[i] = x[i] + (i+1) * md;
		sort(all(v));
		for (int i = 0; i < md; ++i)
			co += v[i];
		if (co <= s)
		{
			ans=md;
			cost = co;
			st = md+1;
		} 
		else 
			en = md-1;
	}
	
	printf("%lld %lld", ans, cost);
	
}