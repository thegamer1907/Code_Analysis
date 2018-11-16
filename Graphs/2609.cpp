/*input
1
1
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
#define N 10001

vector<bool>vis;
vector<set<int> >adj(N, set<int>());

void dfs(int x)
{
	vis[x]=true;
	//cout<<x<<" ";
	int l=adj[x].size();
	// rep(i,0,l)
	// {
	// 	if(vis[adj[x][i]]==false)
	// 	{
	// 		dfs(i);
	// 	}
	// }
	for(set<int>::iterator it=adj[x].begin();it!=adj[x].end();it++){
		if(!vis[*it]) dfs(*it);
	}
}

int main()
{
	ios
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		int n,e;
		cin>>n;
		rep(i,1,n+1){
			cin>>e;
			adj[e].insert(i);
			adj[i].insert(e);
			//cout<<i<<" "<<e<<"\n";
		}
		vis.pb(true);
		rep(i,1,n+1){
			vis.pb(false);
			// cout<<i<<": ";
			// rep(j,0,adj[i].size()) cout<<adj[i][j]<<" ";
			// cout<<"\n";
		}

		int cnt=0;

		rep(i,1,n+1){
			if(!vis[i]){
				dfs(i);
				//cout<<"\n";
				cnt++;
			}
		}

		cout<<cnt;
	}
	return 0;
}