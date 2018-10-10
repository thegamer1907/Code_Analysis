
#include<bits/stdc++.h>
#define T() int t; cin>>t; while(t--)
#define rep(i,start,lim) for(long long i=start;i<lim;i++)
#define repd(i,start,lim) for(long long i=start;i>=lim;i--)
#define ll long long
#define pb push_back
#define f first
#define s second
#define vlld vector<long long> 
#define YES printf("YES\n")
#define NO printf("NO\n")
#define MAX 100000000000000
#define N 110

using namespace std;

ll a,b,c,p,q,r,reb,tot,req[3]={0},ans=0;

ll cost(ll t)
{
	ll z=0;
	ll areq = max(0LL,t*req[0]-a),breq = max(0LL,t*req[1]-b),creq=max(0LL,t*req[2]-c);
	ll tot = areq*p+breq*q+creq*r;
	return tot;
}

void binary_search(ll l,ll r)
{
	//cout<<l<<" "<<r<<endl;
	if(l > r)
	return ;
	ll mid = (l+r)/2;
	if(cost(mid) > reb )
	binary_search(l,mid-1);
	else if(cost(mid) <= reb)
	{
		ans = mid;
		binary_search(mid+1,r);
	}
}

int main()
{
	string s;
	cin>>s;
	cin>>a>>b>>c>>p>>q>>r>>reb;
	rep(i,0,s.length())
	{
		if(s[i] == 'B')
		{
			req[0]++;
		}
		else if(s[i] == 'S')
		{
			req[1]++;
		}
		else
		{
			req[2]++;
		}
	}
	binary_search(0,MAX);
	cout<<ans<<endl;
}



