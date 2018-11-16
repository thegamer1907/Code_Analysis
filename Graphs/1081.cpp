#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

	vector<int> v[100000];
	bool visited[100000] = {false};

void dfs(int s)
{
	if(visited[s]) return;
	visited[s] = true;
	for(auto u: v[s])
	{
		dfs(u);
	}
}

int main()
{
	int n,t; cin>>n>>t;
	int a[100000];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		v[i].pb(i+a[i]);
	}
	dfs(1);
	if(visited[t]) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}