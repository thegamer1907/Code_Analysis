
#include <bits/stdc++.h>
using namespace std;

#define sd(x) 		scanf("%d",&x)
#define su(x) 		scanf("%u",&x)
#define slld(x) 	scanf("%lld",&x)
#define sc(x) 		scanf("%c",&x)
#define ss(x) 		scanf("%s",x)
#define sf(x) 		scanf("%f",&x)
#define slf(x)		scanf("%lf",&x)
#define ll 			long long int
#define mod(x,n) 	(x+n)%n
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
ll mod = 1000000007;

set<ll> temp;
set<ll>::iterator it1, it2;

int main()
{
	// freopen("input_file_name.in","r",stdin);
	// freopen("output_file_name.out","w",stdout);

	// int i,j,k,l,m,n,x,y,z,a,b,r;
	ll i,j,k,l,m,n,p,q,x,y,z,a,b,r;

	slld(n);	slld(k);

	for(i=0;i<n;i++)
	{
		for(y=0,j=0;j<k;j++)
		{
			slld(x);
			if(x==1)
			{
				y |= (1LL<<j);
			}
		}
		temp.insert(y);
	}

	for(it1=temp.begin();it1!=temp.end();it1++)
	{
		for(it2=temp.begin();it2!=temp.end();it2++)
		{
			if(((*it1)&(*it2))==0)
			{
				printf("YES\n");
				return 0;
			}
		}
	}	

	printf("NO\n");
	return 0;
}
