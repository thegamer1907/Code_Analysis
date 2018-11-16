#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> adj[10100];
int c[10100];
int solve(int node, int cur){
	int ans = 0;
	if(c[node]!=cur){
		ans++;
		cur = c[node];
	}
	for(int i=0;i<adj[node].size();i++){
		ans = ans + solve(adj[node][i], cur);
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int x;
		cin>>x;
		adj[x].push_back(i);
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	cout<<solve(1,-1)<<endl;
	return 0;
}