#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define mod 1000000007
#define rep(i,n)    for(ll i=0;i<n;++i)
#define forup(i,a,b)    for(ll i=a;i<=b;++i)
#define all(v)    v.begin(),v.end()
#define inf 1000000010
#define pii pair<ll,ll>
#define vl vector<ll>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define MAXN 110
#define bsize 555
#define sz(v) v.size()
#define endl '\n'
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll power(ll x,ll y, ll md){ll res = 1;x%=md;while(y>0){if(y&1)res = (res*x)%md;x = (x*x)%md;y = y>>1;}return res%md;}

vector<ll> g[2010];
vector<bool> visit(2010,false);
ll cnt[2010];

void bfs(ll x){
    queue<ll> q;
    q.push(x);
    while(!q.empty()){
        ll f = q.front();
        q.pop();
        if(visit[f])
            continue;
        visit[f]=true;
        rep(i,sz(g[f])){
            if(!visit[g[f][i]]){
                cnt[g[f][i]]= cnt[f]+1;
                q.push(g[f][i]);
            }
        }
    }
}
int main(){
    memset(cnt,0,sizeof(cnt));
    fast;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    ll n;
    cin>>n;
    vector<ll> v(n);
    rep(i,n){
        cin>>v[i];
        if(v[i]!=-1){
            g[v[i]].pb(i+1);
            g[i+1].pb(v[i]);
        }
    }
    forup(i,1,n){
        if(!visit[i]&&v[i-1]==-1){
            //cout<<i<<endl;
            bfs(i);
        }
    }
    ll ans=*max_element(cnt,cnt+2010);
    cout<<ans+1;
}