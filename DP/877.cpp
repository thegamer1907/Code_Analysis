#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,d[111],maxx;
int main() {
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>a;
		d[i]=d[i-1]+a;
	}
	if(n==1)
	{
		cout<<1-d[1];
		return 0;
	}
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i;j<=n;j++)
		{
			maxx=max((d[n]-d[j]+d[i-1])+(j-i+1)-(d[j]-d[i-1]),maxx);
		}
	}
	cout<<maxx;
}
