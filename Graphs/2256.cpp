#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>b;i--)
#define pb(x) push_back(x)
typedef long long int lli;
typedef vector<int> vi;
typedef map<int,int> mii;
typedef pair<int,int> pii;

void dfs(int curr,vi adj[],int lvl,int &cnt,vi &vis){
	vis[curr]=1;
	rep(i,0,adj[curr].size()){
		if(!vis[adj[curr][i]])
			dfs(adj[curr][i],adj,lvl+1,cnt,vis);
	}
	cnt=max(cnt,lvl);
}

int main(){
	int n,temp;
	cin>>n;	
	vi adj[n+1];
	vi v;
	rep(i,0,n){
		cin>>temp;
		if(temp==-1){
			v.pb(i+1);
		}
		else{
			adj[temp].pb(i+1);
		}
	} 	
	// rep(i,0,n){
	// 	cout<<i<<": ";
	// 	rep(j,0,adj[i].size())
	// 		cout<<adj[i][j]<<" ";
	// 	cout<<endl;	
	// }
	int res=0;
	int cnt=0;
	rep(i,0,v.size()){
		cnt=0;
		vi vis(n+1,0);
		dfs(v[i],adj,1,cnt,vis);
		res=max(res,cnt);
	}
	cout<<res;
	return 0;
} 
