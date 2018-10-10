#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const ll N=1e7+2;
ll n,a[N],c[N],m[N],f[N],p[N],l,r,q,d;
int main()
{	
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin >> n;
	for(ll i=1; i<=n; i++)
	{
		cin >> a[i];
		c[a[i]]++;
	}
	for(ll i=2; i<=1e7; i++)
	{
		if(m[i]==0)
		{
			f[i]=0;
			for(ll j=i; j<N; j+=i)
			{
				m[j]=1;	
				f[i]+=c[j];
			}
			
		}
	}
	for(ll i=1; i<N; i++)
		p[i]=p[i-1]+f[i];
	cin >> q;
	for(ll i=1; i<=q; i++)
	{
		cin >> l >> r;
		l--;
		d=1e7;
		r=min(r,d);
		if(l>1e7)
			cout << 0 << '\n';
		else
			cout << p[r]-p[l] << '\n';
	}	
	return 0;
}
