#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int f[20];
int cnt;
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int x;
	int flag=0;
	for(int i=1;i<=n;i++){
		int now=0;
		for(int j=1;j<=k;j++){
			scanf("%d",&x);
			if(x) now|=(1<<(j-1));
		}
		for(int j=0;j<15;j++)
			if(f[j]==1&&!(now&j)) flag=1;
		f[now]=1;
	}
	if(f[0]==1) flag=1;
	if(flag) printf("YES");
	else printf("NO");
	return 0;
}
