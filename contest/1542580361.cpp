#include<bits/stdc++.h>
int n,k,t[111];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i){
		int v=0,x;
		for(int j=0;j<k;++j){
			scanf("%d",&x);
			v=v<<1|x;
		}
		++t[v];
	}
	for(int i=0;i<(1<<k);++i){
		for(int j=0;j<(1<<k);++j)if(!(i&j)&&t[i]&&t[j])return puts("YES"),0;
	}
	return puts("NO"),0;
}
