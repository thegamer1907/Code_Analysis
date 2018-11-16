// Devarshi

#include<bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i,n) for(i=0;i<n;i++)
#define forn(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define ford(i, n) for (ll i = (ll)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (ll i = (ll)(a); i <= (ll)(b); ++i)
#define fora(it,x) for(auto it:x)
#define PI 3.14159265
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;

typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

const int maxn=1000001;

vvi g(maxn);
int vis[maxn];
bool flag;

void dfs(int cur,int par){

if(vis[cur]==0){
    vis[cur]=2;
    for(auto it:g[cur]){
        if(it!=par)
        dfs(it,cur);
    }
    vis[cur]=1;
}
else if(vis[cur]==2){
    flag=true;
    return ;
}
else{
    return ;
}

}

int main(){

   int n,m;
   cin>>n>>m;
   memset(vis,0,sizeof(int)*(n+1));
   while(m--){
    int x,y;
    cin>>x>>y;
    g[x].pb(y);
    g[y].pb(x);
   }
    int ans=0;
   fore(i,1,n){
   flag=false;
   if(!vis[i]){
    dfs(i,i);
    if(!flag){
        ans++;
    }
    }
    }
cout<<ans;
return 0;
}
