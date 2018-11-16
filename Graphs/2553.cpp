//SMIT DETROJA
//201601113

#include <map>
#include <queue>
#include <cmath>
#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ld long double
#define sp " "

#define gll(a,n) For(i,0,n) cin>>a[i];

#define pi(x) printf("%lld ",x)

#define mst(a,b) memset(a,b,sizeof a);
#define pline printf("\n")

#define For(i,a,b) for(ll i=a;i<b;i++)
#define RFor(i,a,b) Rfor(ll i=a;i>=b;i--)

#define deb1(x)                cerr<<#x<<": "<<x<<endl
#define deb2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define deb3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define deb4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define deb5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define deb6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

#define pb push_back
#define mp make_pair
#define fir first
#define sec second


#define INF 999999999999999999

using namespace std;

typedef pair<ll,ll> pp;

/*

    For(i,0,m)
    {
        ll u,v;
        cin>>u>>v;

        adj[u].push_back(make_pair(1,v));
        adj[v].push_back(make_pair(1,u));
    }

    ll a,b;
    cin>>a>>b;

    vector<ll> dist1 = dijkstra(a,n,adj);

*/
/*
vector<ll> dijkstra(ll src, ll n ,vector<pair<ll,ll> > adj[])
{
    vector<ll> dist;
    bool visited[n];

    for(ll i=0;i<n;i++)
    {
        dist.push_back(INF);
        visited[i]=false;
    }

    dist[src]=0;
    multiset<pair<ll,ll> > s;
    s.insert(make_pair(0,src));

    while(!s.empty())
    {
        pair<int,int> temp = *s.begin();
        s.erase(s.begin());

        ll u = temp.second;

        if(visited[u])
            continue;

        visited[u]=true;

        for(ll i=0;i<adj[u].size();i++)
        {
            ll w = adj[u][i].first;
            ll v = adj[u][i].second;
            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                s.insert(make_pair(dist[v],v));
            }

        }
    }

    return dist;
}

*/

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;

    ll p[n+1], c[n+1];
    
    For(i,2,n+1)
        cin>>p[i];
  
    For(i,1,n+1)
        cin>>c[i];

    ll ans=0;

    For(i,2,n+1)
    {
    	if(c[i]!=c[p[i]])
    		ans++;
    }
    
    cout<<ans + 1;

    return 0;
}
ll choose(ll n,ll k)
{
    if(k==0)
        return 1;
    return (n* choose(n-1,k-1))/k;
}

bool isprime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}

void setprime(bool isprime[],ll n)
{
    For(i,0,n)
        isprime[i]=true;
        isprime[0]=false;
        isprime[1]=false;

    For(i,2,n)
    {
        for(ll j=2;i*j<n;j++)
            isprime[i*j]=false;
    }
}
