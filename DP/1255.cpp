#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mkp make_pair
#define mod 1000000007
#define pp pair<ll,ll>
ll power(ll a,ll b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    ll r=power(a,b/2)%mod;
    if(b%2==0)
    return (r*r)%mod;
    else
    return (((r*r)%mod)*a)%mod;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	int count=0,m=0;
	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=i;j<n;j++)
		{
			count=count+a[j];
			int w=j-i+1-count;
			m=max(m,w-count);
		}
	}
	
	if(sum==n)
	{
		cout<<sum-1<<"\n";
	}
	else
	{
		cout<<sum+m<<"\n";
	}
	
	return 0;
}
