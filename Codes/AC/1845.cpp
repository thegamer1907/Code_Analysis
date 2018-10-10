#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll l=1;
	ll r=n*m;
	while(l<r)
	{
		ll mid=l+(r-l)/2;
		ll sum=0;
		for(int i=1;i<=m;i++)
		{
			if(mid/i>=n)
			{
				sum+=n;
			}
			else
			{
				sum+=mid/i;
			}
		}
		if(sum<k)
		{
			l=mid+1;
		}
		else
		{
			r=mid;
		}

	}
	cout<<l<<endl;
}
