#include<bits/stdc++.h>
#define rep(i,l,r) for (int i=l;i<=r;i++)
using namespace std;
int f[10050],vis[100500],ans,n,x;
int find(int x){
	if (f[x]==x) return x;
	return f[x]=find(f[x]);
}
int main(){
	scanf("%d",&n);
	rep(i,1,n) f[i]=i;
	rep(i,1,n){
		scanf("%d",&x);
		if (find(x)!=find(i)){
			f[find(i)]=find(x);
		}
	}
	rep(i,1,n) if (!vis[find(i)]) vis[find(i)]=1,ans++;
	printf("%d\n",ans);
	return 0;
}
