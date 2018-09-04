#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

#define maxn 1000005
#define maxm 100005

#define ll long long
#define mod 1000000007
#define infinite 1e18

#define all(x) (x).begin(),(x).end()
#define pll pair<ll,ll>
#define PI acos(-1.0)

#define ff first
#define ss second
#define pb push_back
#define fast_input_output ios::sync_with_stdio(false);  cin.tie(0);

#define deb(x) cout<<#x<<" : "<<x<<endl;
#define debug(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;


int main()
{
    #ifdef ONPC
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast_input_output;
    
    ll n;
    cin>>n;
    ll a[n+1],i,j;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll curr=0;
    map <ll,ll> mp;
    for(i=n;i>=1;i--)
    {
        curr+=a[i];
        mp[curr]=i;
    }
    curr=0;
    ll ma=0;
    for(i=1;i<=n;i++)
    {
        curr+=a[i];
        if(mp[curr]>i)
        {
            ma=max(ma,curr);
        }
    }
    cout<<ma;
    
    #ifdef LOCAL
    err("ELAPSED TIME: %.3Lf\n", (ld) clock() / CLOCKS_PER_SEC);
    #endif
    return 0;
}