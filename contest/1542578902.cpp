#include<bits/stdc++.h>
using namespace std;
int n,m,i,U,S,j;
int a[1<<18],now[1<<18];
int ok(int S){
	for (int i=0;i<m;i++) now[i]=0;
	int all=0;
	for (int i=0;i<U;i++)
		if ((S>>i)&1){
		  if (!a[i]) return 0;
		  for (int j=0;j<m;j++)
		    if ((i>>j)&1) now[j]++;
		  all++;
	  }
	for (int i=0;i<m;i++)
	  if (now[i]*2>all) return 0;
	return 1;
}
int main(){
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++){
		int now=0;
	  for (j=0;j<m;j++){
	    int x;scanf("%d",&x);
			if (x) now+=1<<j;
		}
	  a[now]++;
	}
	U=1<<m;
	for (S=1;S<(1<<U);S++)
	  if (ok(S)) return puts("YES"),0;
	puts("NO");
}