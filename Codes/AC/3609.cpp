#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sprint(string s) {for (int i = 0; i < s.size(); ++i)	printf("%c",s[i]); printf("\n");}
int main(){
	ll n,m,k;
	ll x,s;
	cin>>n>>m>>k>>x>>s;
	ll a[m];
	for (int i = 0; i < m; ++i)
	{
		scanf("%lld",&a[i]);
	}
	ll b[m];
	for (int i = 0; i < m; ++i)
	{
		scanf("%lld",&b[i]);
	}
	ll c[k],d[k];
	for (int i = 0; i < k; ++i)
	{
		scanf("%lld",&c[i]);
	}
	for (int i = 0; i < k; ++i)
	{
		scanf("%lld",&d[i]);
	}
	auto it=upper_bound(d,d+k,s);
	int id=it-d;
	id--;
	ll ans;
	if(id<0) ans=n*x;
	else ans=(n-c[id])*x;
	for (int i = 0; i < m; ++i)
	{
		ll curr=0;
		if(b[i]>s) continue;
		auto it=upper_bound(d,d+k,s-b[i]);
		int id=it-d;
		id--;
		if(id<0) ans=min(ans,n*a[i]);
		else{
			ans=min(ans,(n-c[id])*a[i]);
		}

	}
	printf("%lld\n", ans);
	return 0;
}