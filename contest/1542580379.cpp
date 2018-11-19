#include<bits/stdc++.h>
using namespace std;
int f[50],i,j,o,p,n,k,F;

void dfs(int x,int y,int z){
	if (y==k){
		if (f[z]) F=1;
		return;
	}
	if (x&(1<<y)){dfs(x,y+1,z); return;};
	dfs(x,y+1,z);
	dfs(x,y+1,z+(1<<y));
}

int main(){
	scanf("%d%d",&n,&k);
	for (i=1,o=0; i<=n; i++){
		for (j=o=0; j<k; j++) o+=(scanf("%d",&p),p)*(1<<j);
		f[o]=1;
	}
	for (i=0; i<(1<<k); i++) if (f[i]){
		dfs(i,0,0);
		if (F){puts("YES"); return 0;}
	}
	puts("NO");
}
