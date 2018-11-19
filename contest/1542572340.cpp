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
int n,m,h,s,t1,t2,a[MAXN],b[20][20];
void dfs(int x){
	a[x]=1;
	if (x==t2) { printf("YES\n"); exit(0); }
	int y=(x==12?1:x+1),z=(x==1?12:x-1);
	if (!a[y]&&b[x][y]) dfs(y);
	if (!a[z]&&b[x][z]) dfs(z);
}
int main(){
	h=read(); m=read(); s=read();
	FOR(i,1,12)
		FOR(j,1,12) b[i][j]=1;
	t1=read(); t2=read();
	int h0=(h==12)?1:h+1;
	b[h][h0]=b[h0][h]=0;
	if (m/5==0) b[1][12]=b[12][1]=0;
	else b[m/5][m/5+1]=b[m/5+1][m/5]=0;
	if (s/5==0) b[1][12]=b[12][1]=0;
	else b[s/5][s/5+1]=b[s/5+1][s/5]=0;
	//FOR(i,1,11) printf("%d\n",b[i][i+1]);
	//printf("%d\n",b[1][12]);
	memset(a,0,sizeof(a));
	dfs(t1); printf("NO\n");
	return 0;
}

/*
3 10 4 1 11

*/
