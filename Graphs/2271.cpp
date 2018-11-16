#include<bits/stdc++.h>
#define fs first
#define sc second
#define pi 3.141592653589793238462643383279502884197
//#define e 2.7182818284590452353602874713526624977572
 
typedef long long int ll;
typedef long double ld;
typedef std::vector<ll> vi;
typedef std::vector<bool> vb;
typedef std::vector<char> vc;
typedef std::pair<ll,ll> pii;
typedef std::vector<pii> vii;
 
using namespace std;
const ll mod=1e9+7;
vector<vi> adj;
ll ans=0;

void dfs(ll src,ll depth){
    for(auto i:adj[src]){
        dfs(i,depth+1);
    }
    ans=max(ans,depth);
}

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,a;
    cin>>n;
    vi indeg(n,0);
    adj.resize(n);
    for(int i=0;i<n;++i){
        cin>>a;
        --a;
        if(a>=0){
            adj[a].push_back(i);
            indeg[i]++;
        }
    }
    for(int i=0;i<n;++i){
        if(indeg[i]==0){
            dfs(i,1);
        }
    }
    cout<<ans<<'\n';
    return 0;
}
