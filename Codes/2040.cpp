#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define debug(x) printf("here %d\n",x);
using namespace std;

ll mod=1e9+7;

ll modexp(ll x,ll n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		ll y=modexp(x,n/2)%mod;
		return (y*y)%mod;
	}
	return (x*modexp(x,n-1)%mod)%mod;
}
ll a[200005];
vector<ll> ms[1000005];
 
vector<ll> join(vector<ll> v1,vector<ll> v2)
{
    int i=0,j=0;
    vector<ll> v3;
    while(i<v1.size()&&j<v2.size())
    {
        if(v1[i]<=v2[j])
        {
            v3.pb(v1[i]);
            i++;
        }
        else
        {
            v3.pb(v2[j]);
            j++;
        }
    }
    while(i<v1.size())
    {
        v3.pb(v1[i]);
        i++;
    }
    while(j<v2.size())
    {
        v3.pb(v2[j]);
        j++;
    }
    return v3;
}
 
void cons(int low,int high,int pos)
{
    if(low>high)
        return;
    if(low==high)
    {
        ms[pos].pb(a[low]);
        return;
    }
    int mid=(low+high)/2;
    cons(low,mid,2*pos+1);
    cons(mid+1,high,2*pos+2);
    ms[pos]=join(ms[2*pos+1],ms[2*pos+2]);
}
 
int mini(int qlow,int qhigh,int low,int high,int pos,ll k)
{
    //cout<<qlow<<" "<<qhigh<<" "<<k<<endl;
    if(low>high||qlow>high||qhigh<low)
        return 0;
    if(qlow<=low&&qhigh>=high)
    {
        return (upper_bound(ms[pos].begin(),ms[pos].end(),k)-ms[pos].begin());
    }
    if(low==high)
        return 0;
    int mid=(low+high)/2;
    return (mini(qlow,qhigh,low,mid,2*pos+1,k)+mini(qlow,qhigh,mid+1,high,2*pos+2,k));
}

int main()
{
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    #endif
    int n;
    ll k;
    scanf("%d%lld",&n,&k);
    for(int i=0;i<n;i++)
    {
    	scanf("%lld",&a[i]);
    }
    cons(0,n-1,0);
    ll ans=0;
    for(int i=1;i<n-1;i++)
    {
    	if(a[i]%k==0)
    	{
    		ll l=mini(0,i-1,0,n-1,0,a[i]/k)-mini(0,i-1,0,n-1,0,(a[i]/k)-1);
    		//cout<<a[i]<<" "<<l<<endl;
    		//cout<<a[i]*k;
    		ll r=mini(i+1,n-1,0,n-1,0,a[i]*k)-mini(i+1,n-1,0,n-1,0,(a[i]*k)-1);
    		//cout<<a[i]<<" "<<r<<endl;
    		ans+=(l*r);
    	}
    }
    printf("%lld\n",ans);
	return 0;
}