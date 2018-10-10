#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

ll chk(ll x,vector<ll> a)
{
    vector<ll> c(a.size());
    for(ll i=0;i<a.size();i++)
    {
        c[i] = a[i] + (i+1)*x;
    }
    sort(all(c));
    ll ans=0;
    for(ll i=0;i<x;i++)
        ans+=c[i];
    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,s;
    cin>>n>>s;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll st=0,en = n+1;
    while(st<en-1)
    {
        ll mid = (st+en)/2;
        if(chk(mid,a)<=s)
            st = mid;
        else
            en=mid;
    }
    cout<<st<<" "<<chk(st,a);
    return 0;
}
