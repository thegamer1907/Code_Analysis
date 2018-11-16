#include <bits/stdc++.h>
struct e{e *nxt;int t;e(e *a,int b):nxt(a),t(b){}}*G[10005];
inline void insert(int f,int t){G[f]=new e(G[f],t);}
int C[10005],ans,n;
void dfs(int now,int nowc){
	if(nowc!=C[now])
		++ans; nowc=C[now];
	for(e *i=G[now];i;i=i->nxt)dfs(i->t,nowc);
}
int main(){
	std::cin>>n;
	for(int i=2,a;i<=n;++i){
		scanf("%d",&a);
		insert(a,i);
	}for(int i=1;i<=n;++i)
		scanf("%d",C+i);
	return dfs(1,0),!printf("%d\n",ans);
}
