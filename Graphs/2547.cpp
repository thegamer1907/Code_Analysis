#include<cstdio>
#include<vector>
using namespace std;
vector<int>tree[10010];
bool vis[10010];
int ans=0,s[10010];
void dfs(int node,int pre);
int main()
{
	int n,num;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
	 scanf("%d",&num);
	tree[i].push_back(num);
	tree[num].push_back(i);
	}
	for(int i=1;i<=n;i++)
	 scanf("%d",&s[i]);
	dfs(1,0);
	printf("%d",ans);
}
void dfs(int node,int pre)
{
	vis[node]=true;
	if(s[node]!=s[pre])
	 ans++;
	for(int i=0;i<tree[node].size();i++)
	 if(!vis[tree[node][i]])
	 {
	 	dfs(tree[node][i],node);
	 }
}