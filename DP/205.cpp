#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
bool check(const vector<ll>& a,const vector<ll>& b)
{
	return a.size()<b.size();
}
main()
{
	ll n;
	cin>>n;
	ll a[n],i,j;
	for(i=0;i<n;i++)
	cin>>a[i];
	ll m;
	cin>>m;
	ll b[m];
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	ll c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(abs(a[i]-b[j])<=1)
			{
				//cout<<i<<" "<<j<<endl;
				b[j]=10000;
				c++;
				break;
			}
		}
	}
	cout<<c<<endl;
}