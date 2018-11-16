#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define MOD2 100000000
#define ll long long
#define cnl(d) cout<<d<<'\n'
#define cns(d) cout<<d<<' '
#define rcnl(d) {cout<<d<<'\n';return 0;}
#define rcns(d) {cout<<d<<' ';return 0;}
#define rcyes {cyes;return 0;}
#define rcno {cno;return 0;}
#define ccnl(d) {cout<<d<<'\n';continue;}
#define ccns(d) {cout<<d<<' ';continue;}
#define endl '\n'
#define cno cout<<"NO\n"
#define cyes cout<<"YES\n"
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define pl pair<ll,ll>
#define vll vector<pl>
#define sl set<ll>
#define sll set<pl>
#define msl map<string,ll>
#define mll map<ll,ll>
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(i=(a);i<=(b);i++)
#define rdp(i,a,b) for(i=(a);i>=(b);i--)
#define lb(v,z) lower_bound(all(v),z)
#define ub(v,z) upper_bound(all(v),z)
#define trvl(c,it) for(vl::iterator it=(c).begin();it!=(c).end();it++)
#define trvll(c,it) for(vll::iterator it=(c).begin();it!=(c).end();it++)
#define trsll(c,it) for(sll::iterator it=(c).begin();it!=(c).end();it++)
#define trmsl(c,it) for(msl::iterator it=(c).begin();it!=(c).end();it++)
#define trmll(c,it) for(mll::iterator it=(c).begin();it!=(c).end();it++)
#define trsl(c,it) for(sl::iterator it=(c).begin();it!=(c).end();it++)
#define trsi(c,it) for(set<int>::iterator it=(c).begin();it!=(c).end();it++)
#define INF 1000000000
using namespace std;

ll c[10001]={0},n; vl adj[10001]; ll r=0;

void dfs(ll i,ll p){
    for(auto e:adj[i]){
        if(c[e]!=c[i] && e!=p) r++;
        if(e!=p) dfs(e,i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,l=1e9,m=0,k=0,b=0;// char c;;
    cin>>n;
    rep(i,2,n){
        cin>>k;
        adj[k].pb(i);
        adj[i].pb(k);
    }
    rep(i,1,n){
        cin>>k;
        c[i]=k;
    }
    dfs(1,0);
    cout<<r+1;

}

