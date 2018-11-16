#include<bits/stdc++.h>
using namespace std;
const int N=10010;
vector<int> g[N];
int col[N],f[N];
int colo(int x){
	int res=(col[x]!=col[f[x]]);
	for (int i=0; i<(int)g[x].size(); ++i) res+=colo(g[x][i]);
//	printf("%d %d\n",x,res);
	return res;
}
int main(){
	int n; scanf("%d",&n);
	for (int i=2; i<=n; i++){
		int fa; scanf("%d",&fa);
		g[fa].push_back(i);
		f[i]=fa;
	}
//	for (int i=1; i<=n; i++) printf("%d ",f[i]); puts("");
	for (int i=1; i<=n; i++) scanf("%d",&col[i]);
	printf("%d\n",colo(1));
}