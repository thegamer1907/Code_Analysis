#include <bits/stdc++.h>
#define ll long long 
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define inf 1e18
#define sc(x) scanf("%lld",&x)
#define pf(x) printf("%lld\n",x)
#define ft first
#define sd second
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],mx=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(a[i],mx);
    }
    ll sum=0;
    for(ll i=0;i<n;i++)
        sum+=(mx-a[i]);
    ll ansmx=mx+m;
    ll ansmn=mx;
    if(m-sum<=0)
    {
        cout<<ansmn<<" "<<ansmx<<endl;
        return 0;
    }
    else
    {
        m-=sum;
        if(m%n==0)
            ansmn+=(m/n);
        else
            ansmn+=(m/n+1);
        cout<<ansmn<<" "<<ansmx<<endl;
    }
	return 0;
}
