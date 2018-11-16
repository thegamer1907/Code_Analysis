#include <bits/stdc++.h>
using namespace std;

vector<int>g[30001];
int vis[30001];

void dfs(int x){
	vis[x]=1;
	for(int i=0;i<g[x].size();i++)
		if(vis[g[x][i]]==0)dfs(g[x][i]);
}

int main(){
	int n,d;
	scanf("%d %d",&n,&d);
	
	//source = cell 1
	for(int i=1;i<n;i++){
		int a;
		scanf("%d",&a);
		g[i].push_back(i+a);
	}
	
	dfs(1);
	if(vis[d]==1)printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
