#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<int, int>
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;++i)
#define repd(i,a,b) for(int i=a;i>=b;--i)
#define mp make_pair
#define hell 1000000007
#define endl '\n'
#define vvll vector<vector<int> >
#define vll vector<int>
#define mint map<int,int> 
#define sz(x) (int)x.size()
#define sll set<int>
#define pll pair<int,int>

const int N=1e5+5;
vector<pll> adjlist[N];
priority_queue<pll, vector<pll>, greater<pll> > pq;
int vis[N],dist[N];
void dijkstra(int root){
    pq.push(mp(0LL,root));
    while(pq.size()){
        pll k=pq.top();
        pq.pop();
        if(vis[k.second]){
            continue;
        }
        dist[k.second]=k.first;
        vis[k.second]=1;
        for(auto i:adjlist[k.second]){
            if(!vis[i.first])
                pq.push(mp(i.second+dist[k.second],i.first));
        }
        
    }
}
void solve(){ 
	rep(i,1,50000){
		adjlist[i].pb(mp(i-1,1LL));
		adjlist[i].pb(mp(2*i,1LL));
	} 
	int n,m;
	cin>>n>>m;
	dijkstra(n);
	cout<<dist[m]<<endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}