#include <bits/stdc++.h>
using namespace std;

#define alpha ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mp make_pair

typedef long long ll; 

int main()
{
	alpha

	ll n,t,k,p=0,i,x;
	cin>>n>>t;
	ll a[n-1];
	for(i=0; i<n-1; i++)
	{
		cin>>x;
		a[i]=i+1+x;
	}
	k=0;
	for(i=0; i<n-1; i++)
	{
		//cout<<k<<" ";
		if(k+1==t)
		{
			p=1;
			break;
		}
		if(k>t || k==n-1)
			break;
		k=a[k]-1;
	}
	if(p)
		cout<<"YES";
	else
	{
		if(k+1 == t)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}