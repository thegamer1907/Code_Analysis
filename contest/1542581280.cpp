#include<bits/stdc++.h>
using namespace std;
inline char nchar() {
	static const int bufl=1<<20;
	static char buf[bufl],*a,*b;
	return a==b && (b=(a=buf)+fread(buf,1,bufl,stdin),a==b)?EOF:*a++;
}
inline int read() {
	int x=0,f=1;
	char c=nchar();
	for (;!isdigit(c);c=nchar()) if (c=='-') f=-1;
	for (;isdigit(c);c=nchar()) x=x*10+c-'0';
	return x*f;
}
const int maxn=1e5+1;
const int maxk=4;
const int maxs=1<<maxk;
int a[maxn],can[maxs],sum[maxk],all=0,n,k,S;
bool b[maxs];
int main() {
#ifndef ONLINE_JUDGE
	freopen("test.in","r",stdin);
#endif
	n=read(),k=read(),S=1<<k;
	for (int i=1;i<=n;++i) {
		int &x=a[i]=0;
		for (int j=0;j<k;++j) x|=read()<<j;
		b[x]|=true;
	}
	for (int s=0;s<S;++s) if (b[s]) can[all++]=s;
	int the=1<<all;
	for (int s=1;s<the;++s) {
		memset(sum,0,sizeof sum);
		for (int j=0;j<all;++j) if ((s>>j)&1) for (int i=0;i<k;++i) sum[i]+=((can[j]>>i)&1);
		int cnt=0;
		for (int j=0;j<all;++j) cnt+=((s>>j)&1);
		bool flag=true;
		for (int i=0;i<k;++i) if ((sum[i]<<1)>cnt) {flag=false;break;}
		if (flag) puts("YES"),exit(0);
	}
	puts("NO");
	return 0;
}
