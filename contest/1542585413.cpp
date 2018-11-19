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
char s[MAXN],t[MAXN][5];
int n,m,a[MAXN],b[MAXN];
int main(){
	scanf("%s",s+1);
	n=read();
	FOR(i,1,n) scanf("%s",t[i]+1);
	FOR(i,1,n) if (t[i][1]==s[1]&&t[i][2]==s[2]) { printf("YES\n"); return 0; }
	FOR(i,1,n)
		FOR(j,1,n)
		if (t[i][1]==s[2]&&t[j][2]==s[1]) { printf("YES\n"); return 0; }
	printf("NO\n");
	return 0;
}

/*
*/
