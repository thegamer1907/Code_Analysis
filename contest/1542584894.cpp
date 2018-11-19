#include <set>
#include <map>
#include <ctime>
#include <cmath>
#include <queue>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define PII pair<int,int>
#define fi first
#define se second
#define FOR(i,a,b) for (int i=(a);i<=(b);++i)
#define ROF(i,b,a) for (int i=(b);i>=(a);--i)
typedef long long LL;
inline int read(){
	int x=0,f=1; char ch=getchar();
	while (ch<'0'||ch>'9') { if (ch=='-') f=-1; ch=getchar(); }
	while (ch>='0'&&ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	return x*f;
}

const int MAXN=300005,Mo=1000000007;
int n,m,a[MAXN];
int main(){
	n=read(); m=read();
	memset(a,0,sizeof(a));
	FOR(i,1,n) {
		int x=0,y;
		FOR(i,1,m) {
			y=read();
			x=x<<1|y;
		}
		a[x]++;
	}
	FOR(i,0,15)
		FOR(j,0,15)
		if (a[i]&&a[j]&&((i&j)==0)) { printf("YES\n"); return 0; }
	printf("NO\n");
	return 0;
}

/*
*/
