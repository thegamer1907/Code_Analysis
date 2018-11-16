#include<bits/stdc++.h>
using namespace std;
const int inf=2000000000;
int s[3005],c[3005];
int read() {
	char c=getchar(); int x=0,f=1;
	while (c<'0' || c>'9') {
		if (c=='-') f=-1;
		c=getchar();
	}
	while (c>='0' && c<='9') {
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
int main() {
	int n=read();
	for (int i=1; i<=n; i++) s[i]=read();
	for (int i=1; i<=n; i++) c[i]=read();
	int ans=inf;
	for (int j=2; j<=n-1; j++) {
		int mi=inf,mk=inf;
		for (int i=1; i<=j-1; i++) if (s[i]<s[j]) mi=min(mi,c[i]);
		for (int k=j+1; k<=n; k++) if (s[j]<s[k]) mk=min(mk,c[k]);
		if (mi!=inf && mk!=inf) ans=min(ans,mi+c[j]+mk);
	}
	if (ans==inf) printf("-1\n");
	else printf("%d\n", ans);
	return 0;
}