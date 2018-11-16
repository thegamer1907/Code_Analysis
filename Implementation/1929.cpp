#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<ll, ll>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back
using namespace std; 
vector<vector<ll> >v;
vll p;
ll bfs(ll src){
    queue<ll>q;
    q.push(src);
    ll h=0;
    while(!q.empty()){
        ll x=q.size();
        while(x--){
            ll z=q.front();
            q.pop();
            for(ll i=0;i<v[z].size();i++){
                q.push(v[z][i]);
            }
        }
        h++;
    }
    return h;
}
int main()
{
    std::ios::sync_with_stdio(false);
    ll t=1;
    //cin>>t;
    while(t--){
        ll n,x,y,z,a=0,b=0,c=0;
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>x>>y>>z;
            a+=x;
            b+=y;
            c+=z;
        }
        if(a==0 && b==0 && c==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}