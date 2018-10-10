#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

const int maxn=int(1e5)+111;
int n;

int main() {
//	freopen("input.txt","r",stdin);

	scanf("%d",&n);

	register int i,cur,k,t;
	int minn=int(1e9)+111,ans=-1;

	for(i=0;i<n;++i) {
		scanf("%d",&cur);
		k=cur/n;
		if(k*n+i>=cur) t=k*n+i;
		else t=(k+1)*n+i;
		if(t<minn) minn=t, ans=i+1;
	}
	printf("%d\n",ans);


	return 0;
}