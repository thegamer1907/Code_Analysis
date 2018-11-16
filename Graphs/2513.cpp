#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
vector<int> vec[maxn];
int c[maxn];
int ans=0;
void dfs(int x,int now){
	if(c[x]!=now)
		ans++;
	for(auto it:vec[x])
		dfs(it,c[x]);
}
int main(){
	int n,p;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		scanf("%d",&p);
		vec[p].push_back(i);
	}
	for(int i=1;i<=n;i++)
		scanf("%d",&c[i]);
	dfs(1,0);
	printf("%d\n",ans);
	return 0;
}
