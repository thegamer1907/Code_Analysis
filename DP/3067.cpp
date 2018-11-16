#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fr ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<algorithm>


int main() 
{
	fr
	ll n;
	cin>>n;
	ll arr[n],c[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	for(ll i=0;i<n;i++)
		cin>>c[i];
	ll ans=INT_MAX;
	bool flag=0;
	if(n<3)
	{
		cout<<"-1";
		return 0;
	}
	ll a1[n],a2[n];

	for(ll i=0;i<n;i++)
		a1[i]=a2[i]=INT_MAX;
		
	for(int i=n-2;i>=0;i--)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				a1[i]=min(a1[i],c[i]+c[j]);
				a2[i]=min(a2[i],c[i]+a1[j]);
			}
		}
		ans=min(ans,a2[i]);
	}
	if(ans!=INT_MAX)
		cout<<ans<<endl;
	else
	cout<<-1;
	return 0;
}
