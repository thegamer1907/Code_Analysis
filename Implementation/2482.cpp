#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<cmath>
#include<string>
#include<cstdio>
//#include <bits/stdc++.h>
#include<map>
//#include<multiset>
#include <sstream>
#include<ctime>
using namespace std;
#define ll long long int
#define ld long double
#define key pair<ld,ld>
#define ii pair<int,int>
#define si set<int>
#define vii vector<pair<int,int> >
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int> >
#define vs vector<string>
#define all(v) v.begin(),v.end()
//#define rep(i,n) for(long long int i = 0; i < n; ++i)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define nu 100001
#define mod 998244353
#define mul(x,y) ((ll)(x)*(y))%mod
#define viter vector<int>::iterator
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define INF 0x3f3f3f3f
const ll P=1000000000+7;
//vvi adj;
//vi a;
//vi  b;
//vi c;vi sol;
//vi visited;
//ll C[5005][5005];
ll MOD(ll a, ll b)
{
    if(a>b)
        return a-b;
    else
        return b-a;
}
long long int max3(long long int a,long long int b, long long int c)
{
    return max(c,max(a,b));
}
ll power(ll x,ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    
    return res;
}
ll Pow(ll x,ll y)
{
    ll res = 1;
    
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) ;
        y = y>>1;
        x = (x*x) ;
    }
    
    return res;
}
ll logg(ll a)
{
    ll x=0;
    while(a>1)
    {
        x++;
        a/=2;
    }
    return x;
}
long long int mins(ll a,ll b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
/*int dfs(int i,vi adj[])
{
    
    visited[i]=1;
        int x=0;
        for(int j=0;j<((adj[i]).size());j++)
        {
            if(visited[adj[i][j]]!=1)
            {
                x=x+dfs(adj[i][j],adj);
            }
        }
       a[i]=x+1;
 
        return x+1;
}
*/
string conbin(int a,int size)
{
    string g;
    while(a>0)
    {
        g.push_back(a%2);
        a=a/2;
    }
    while(g.size()<size)
    {
        g.pb('0');
    }
    reverse(all(g));    return g;
}
struct comp_pair_int {
    bool operator()(const pair<int,int> &a, const int & b)
    {
        return (a.first < b);
    }
    bool operator()(const int & a,const pair<int,int> &b)
    {
        return (a < b.first);
    }
};

int main()
{
    int n;
    cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    vi c(n);c[0]=b[0]-a[0];
    for(int i=1;i<n;i++)
    {
        c[i]=c[i-1]+b[i]-a[i];
    }
    sort(all(c));
    cout<<c[n-1];
        
}
    

