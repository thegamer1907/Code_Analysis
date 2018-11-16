#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;
#define lli long long int
#define v vector<int> 
#define vv vector<v>
#define p pair<lli,lli>
#define arrayinput int n; int m; cin>>n>>m; v arr (n+1,-1); for (int i=0; i<n; i++){int temp; cin>>temp;arr[i]=temp;}
int z=1000000007;
void dfs(int n, v &visited, vv& adj)
{
	for (int i=0; i<adj[n].size(); i++)
	{
		if (visited[adj[n][i]]==-1)
		{
			visited[adj[n][i]]=1;
			dfs(adj[n][i],visited,adj);
		}
	}
}
int main() {
	int n;
	cin>>n;
	vv adj(n+1);
	for (int i=1; i<=n; i++)
	{
		int temp;
		cin>>temp;
		adj[i].push_back(temp);
		adj[temp].push_back(i);
	}
	v visited(n+1,-1);
	int count=0;
	for (int i=1; i<=n;i++)
	{
		if (visited[i]==-1)
		{
			count++;
			dfs(i,visited,adj);
		}
	}
	cout<<count<<endl;

	return 0;
}