/*
ID: Rec
PROG: test
LANG: C++
*/
#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
#include<algorithm>
#include<stack>
int n,k;
bool vis[(1<<4)+5];
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++){
		int sta=0;
		for (int j=1;j<=k;j++){
			int x;
			scanf("%d",&x);
			sta+=(1<<(j-1))*x;
		}
		vis[sta]=1;
	}
	bool b=1;
	for (int i=0;i<=1<<4;i++)
	  for (int j=0;j<=1<<4;j++)
	    if (vis[i]&&vis[j]){
	    	if ((i&j)==0){
	    		b=0;
	    		break;
	    	}
	    }
	if (b==1)printf("NO");else printf("YES");
	return 0;
}
