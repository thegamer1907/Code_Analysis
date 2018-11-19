#include <cstdio>
using namespace std;
int p[1000];
int main() {
	int n,k,i,t,j,w,q;
	scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++) {
		t=0;
		for (j=1;j<=k;j++) {
			scanf("%d",&w); t=t*2+w;
		}
		p[t]=1;
	}
	t=1<<k;
	for (i=0;i<t;i++) 
	for (j=0;j<t;j++) {
		q=(t-1)^i;
		if ((q&j)==j && p[i] && p[j]) {
			puts("YES"); return 0;
		}
	}
	puts("NO");
}