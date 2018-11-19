#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int f[20];
int cnt=0;
int main(){
	//freopen("a.in","r",stdin);
	//freopen("a.out","w",stdout);
	int n,k;
	scanf("%d %d",&n,&k);
	int x;
	int ok=0;
	for(int i=1;i<=n;i++){
		int now=0;
		for(int j=1;j<=k;j++){
			scanf("%d",&x);
			if(x)	
				now|=(1<<(j-1));
		}
		for(int j=0;j<15;j++)
			if(f[j]==1&&!(now&j))
				ok=1;
		f[now]=1;
	}
	if(f[0]==1)
		ok=1;
	if(ok)
		puts("YES");
	else puts("NO");
return 0;
}
