//coded by dsingh_24
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pll         pair<long long,long long>
#define vll          vector<long long>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (long long)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll a,b,c,a1,b1,c1,r,a2=0,b2=0,c2=0,ans=0;
ll check(ll i)
{
	ll sum=0;
    sum+=a1*(max(a2*i-a,0LL));
    sum+=b1*(max(b2*i-b,0LL));
    sum+=c1*(max(c2*i-c,0LL));
    if(sum<=r)return 1;
    return 0;
}

int main()
{
	ios
    string s;
    cin>>s;
    ll i,j;
    cin>>a>>b>>c>>a1>>b1>>c1>>r;
    for(i=0;i<s.size();i++)
    {
    	if(s[i]=='B')a2++;else
    	if(s[i]=='S')b2++;else c2++;
	}
    ll hi=1e12+hell,lo=0,mid;
    for(i=0;i<70;i++)
    {
    	mid=(hi+lo)/2;
    	if(check(mid))lo=mid;else hi=mid;
	}
	if(check(hi))cout<<hi;else cout<<mid;
	return 0;
}
