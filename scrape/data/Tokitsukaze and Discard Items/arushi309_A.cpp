#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair <ll,ll> pll;
#define mod 1000000007
#define inf 1000000000000000000

ll possible(ll p[],ll k, ll n,ll m)
{
    ll kcopy=k;
    ll ans=0;
    ll x=0;
    int flag=0;
    ll ct=0;
    for(int i=0;i<m;)
    {
        ct=0;
        while(p[i]-x<=k && i<m)
        {
            ct++;
            i++;
        }
        if(ct>0)
            ans++;
        x=x+ct;
        if(i==m)
            break;
        if(p[i]-x>k)
        {
            ll z=p[i]-x;
            ll z1=z/kcopy;
            if(z%kcopy!=0)
                z1++;
            k=z1*kcopy;
        }
        /*ll y=p[i]-x;
        if(y>k && flag==0)
        {
            flag=1;
            ans++;

        }
        ct++;*/
    }
    return ans;
}

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;

    //unordered_map<ll,ll>m;

    ll p[m];
    for(int i=0;i<m;i++)
        cin>>p[i];
    sort(p,p+m);

    cout<<possible(p,k,n,m)<<endl;

    return 0;
}