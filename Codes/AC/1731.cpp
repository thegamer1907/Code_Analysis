#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll x=0,l=1,mid,p=-1,r=n*m,i;
	while(l<r)
	{
		x=0;
		mid=(l+r)/2;
		if(mid==p)
			mid+=1;
		for(i=1;i<=n;i++)
			x+=min(m,mid/i);
		if(x>=k)
			r=mid;
		else
			l=mid+1;
		p=mid;
	}	
	cout<<r<<endl;
	return 0;
}