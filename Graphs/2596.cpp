#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int a[100005];
int visited[100005];

vector<int> graph[100005];
int ans;
void dfs(int node,int color) {
	if ( a[node] != color ){
		// printf("%d\n",node);
		ans++;
	}
	visited[node] = 1;
	int len = graph[node].size();
	for (int i = 0; i <len ; ++i)
	{
		if(!visited[graph[node][i]]) {
			dfs(graph[node][i], a[node]);
		}
	}
}

int main() {
	
	int n,x;
	ans =0;
	scanf("%d",&n);

	for (int i = 2; i <=n; ++i)
	{
		scanf("%d",&x);
		graph[i].push_back(x);
		graph[x].push_back(i);
	}	
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&x);
		a[i+1] = x;
	}		
	dfs(1,-1);
	printf("%d\n", ans);
}