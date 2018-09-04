//IN THE NAME OF GOD
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <map>
#define  pb push_back
#define  pf push_front
#define  S second
#define  F first
#define ra ragham
#define ll long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
typedef pair<pii,ll> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
const int maxn = 2e5+100;
map<ll , ll>d;
map<ll , ll>v;
ll a[maxn] ;
ll ans ;
ll n , k ;

int main()
{
cin >> n >> k;
for(ll y=  0 ; y < n ; y++)
    cin >> a[y];
for(ll y= n-1 ; y >= 0 ; y--)
{
    ll t = a[y] ;
    t*=k;
    ans+=d[t] ;
    d[a[y]]+=v[t] ;
    v[a[y]]++;
}
cout<<ans ;
}