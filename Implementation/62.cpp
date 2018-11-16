#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//freopen("aa.in","r",stdin);
	int i,j;
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	--n,--a,--b;
	for(i=0;(1<<i)<=n;++i){
		int t=(n>>i)<<i;
		if((a&t)==(b&t))break;
	}
	if((1<<i)>=n)puts("Final!");
	else printf("%d\n",i);
	return 0;
}