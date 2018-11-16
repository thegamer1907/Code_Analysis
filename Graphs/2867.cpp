#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define N 100010
vector<int> graph[N];
int visited[N], par[N], mk = 0;
void dfs(int s){
	visited[s] = 1;
	for(int i=0;i<graph[s].size();i++){
		if(!visited[graph[s][i]]){
			par[graph[s][i]] = s;
			dfs(graph[s][i]);
		}
		else if(graph[s][i] != par[s])
			mk = 1;
	}	
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		graph[a-1].pb(b-1);
		graph[b-1].pb(a-1);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			mk = 0;
			dfs(i);
			ans += 1 - mk;
		}
	}
	cout<<ans<<'\n';
}