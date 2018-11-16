#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<vector<int> > G;
vector<int> visited;
vector<int> A;
int n, t;

void dfs(int x){
	//cout<<"entered with x = "<<x<<endl;
	if (visited[x])
		return;
	visited[x] = true;
	for (auto y: G[x]){
		if (!visited[y]){
			dfs(y);
		}
	}
}

void initialise(){
	G.resize(n+1);
	visited.resize(n+1, false);
	for (int i = 1; i <= n - 1; i++){
		int a = i, b = i + A[i];
		G[a].push_back(b);
	}
	dfs(1);
}

int main(){
	cin>>n>>t;
	A.resize(n);
	for(int i = 1; i <= n-1; i++){
		cin>>A[i];
	}
	initialise();
	if (visited[t]) cout<<"YES";
	else cout<<"NO";
}