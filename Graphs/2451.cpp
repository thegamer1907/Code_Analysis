/*input
7
1 1 2 3 1 4
3 3 1 1 1 2 3
*/

/***** phoenix1110 *****/

#include<bits/stdc++.h>
#define ull 		unsigned long long
#define ll 			long long
#define hell 		1000000007
#define pb 			emplace_back
#define p_q 		priority_queue
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define vii         vector<pii>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (ll)x.size()
#define endl        '\n'
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios	    	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mp 			make_pair
#define lb 			lower_bound
#define ub			upper_bound
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define ini(a,n,b)	for(ll int i=0;i<n;i++) a[i]=0;
#define inf 		(ull)1e9
using namespace std;
#define N  10005
int vis[N];
int col[N+1];
int k=0;
vector<int> adj[N];
void dfs(int s){
	//cout<<s<<" "<<vis[s]<<" "<<col[s]<<"\n";
	if(vis[s]!=col[s]){
		vis[s]=col[s];
		k++;
	}
	int l=adj[s].size();
	rep(i,0,l){
		int node=adj[s][i];
		if(vis[node]!=col[node]){
			if(col[node]==col[s]){
				vis[node]=col[s];
				dfs(node);
			}
			else{
				dfs(node);
			}
		}
	}
}

int main()
{
	ios
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		int n;
		cin>>n;
		int par[n+1];
		par[0]=par[1]=-1;
		rep(i,2,n+1) cin>>par[i];
		rep(i,1,n+1) cin>>col[i];
		rep(i,2,n+1){
			adj[par[i]].pb(i);
			adj[i].pb(par[i]);
		}

		// rep(i,1,n+1){
		// 	cout<<i<<" : ";
		// 	//f//or(auto edge:adj[i]) cout<<edge<<" ";
		// 	cout<<"\n";
		// }
		dfs(1);
		cout<<k;
	}
	return 0;
}