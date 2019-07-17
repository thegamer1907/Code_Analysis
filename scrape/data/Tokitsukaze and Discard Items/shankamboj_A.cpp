//hey Stalker

///????10000??????
///????10000??????
///????10000??????/????10000??????/????10000??????/????10000??????/????10000??????
#include<bits/stdc++.h>
#define ll long long
#define vect vector<int>
#define pb push_back
#define f(n) for(i=0;i<n;i++)
#define F(n) for(i=1;i<=n;i++)
#define f first
#define s second
#define mod 1000000007
#define Map map<ll , ll >
using namespace std;
main()
{ll n,m,k;
	cin>>n>>m>>k;
	ll arr[m+1];
	ll deleted=0;
	ll i=1;
	for(ll j=1;j<=m;j++)
		cin>>arr[j];
	ll turn=1;
	ll ans=0;
	ll olddeleted=0;
	ll count=0;
	while(i<=m)
	{	//cout<<i<<endl;	
	
//		olddeleted=deleted;
//		while(arr[i]-olddeleted<=k*turn && i<=m)
//		{
//			deleted++;
//				i++;
//		}
//		if(deleted!=0)
//		ans++;
		ll ch=0;
	//
	//	cout<<"Deleted1 " << deleted<<endl;
		while(1)
		{
			olddeleted=deleted;
			ch=0;
		while(arr[i]-olddeleted<=turn*k&& i<=m)
			{	//count++;
				i++;
				deleted++;
				ch=1;
			}
			
			if(ch==0)
				break;
			else
			{
				ans+=1;
				
			}
		}
	//	cout<<"Deleted2 "<<deleted<<endl;	
//			if(ch==1)
//				ans+=ceil(double(count)/k);
			count=0;
			
			turn=ceil(double(arr[i]-deleted)/k);	
	}
	cout<<ans<<endl;
}