#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back 
#define mp make_pair
#define MAX 1000001
ll a[MAX],b[MAX];
int main()
{
	ll n,i,j,s;
	cin>>n>>s;
	for(i=1;i<=n;++i)
	{
		cin>>a[i];
	}

	ll beg=0,end=n,ans=0,cost=0;
	ll mid;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		//cout<<beg<<"\t"<<mid<<"\t"<<end<<"\n";
		for(i=1;i<=n;++i)
		{
			b[i]=a[i]+(i*mid);
		}
		sort(b+1,b+1+n);
		for(i=2;i<=n;++i)
		{
			b[i]+=b[i-1];
		}
		if(b[mid]>s)
		{
			end=mid-1;
		}
		else if(b[mid]<s)
		{
			beg=mid+1;
			ans=mid;
			cost=b[ans];
		}
		else
		{
			ans=mid;
			cost=b[ans];
			break;
		}
	}
	cout<<ans<<" "<<cost;
}