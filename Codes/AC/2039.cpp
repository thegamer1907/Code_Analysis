#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define sfd(x) scanf("%lld",&x)
#define sfc(x) scanf("%c",&x)
#define pf printf
//#define for(i,p,n) for(int i=p;i<n;i++)
#define mod 1000000007
using namespace std;
int main()
{
    ll n,k;
    sfd(n);sfd(k);
    ll i,a[n];
    map<ll,ll> f,m;
    for(i=0;i<n;i++)
        sfd(a[i]);
    ll s=0;
    for(i=n-1;i>=0;i--)
    {
        s=s+m[a[i]*k];
        m[a[i]]+=f[a[i]*k];
        f[a[i]]++;
    }
    pf("%lld\n",s);
}
