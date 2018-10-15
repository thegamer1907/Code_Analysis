#include<bits/stdc++.h>
#define ipa pair<lld,lld>
#define lld long long int
#define x first
#define y second
#define ld long double
#define pb push_back
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PI (atan(1)*4)
#define mp make_pair
#define mlog 21
#define mod 1000000000
using namespace std;
const int maxn=2*(1e5+2);
main()
{
	fastread;
	lld i,j,pre[maxn],arr[maxn],ans,n,q;
	cin>>n>>q;
	for(i=0;i<n;++i)
		cin>>arr[i];
	pre[0]=arr[0];
	for(i=1;i<n;++i)
		pre[i]=pre[i-1]+arr[i];
	lld start=0,sum=0;
	for(i=0;i<q;++i)
	{
		lld x;
		cin>>x;
		lld pos=lower_bound(pre,pre+n,x+sum)-(pre);
		//	cout<<x+sum<<" "<<pos<<" ";

		if(pos==n||(pre[pos]==x+sum&&pos==n-1))
		{
			cout<<n<<"\n";
			sum=0;
		}
		else if(pre[pos]==x+sum)
		{
			cout<<n-pos-1<<"\n";
			sum+=x;
		}
		else
		{
			cout<<n-pos<<"\n";
			sum+=x;
		}
	}
}