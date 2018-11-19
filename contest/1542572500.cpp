#include <set>
#include <map>
#include <ctime>
#include <cmath>
#include <queue>
#include <bitset>
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

const int MAXN=300005,Mo=1000000007,N=15;
char s[MAXN],h[205][20],t[205][20];
int n,m,a[205];
bitset<(1<<16)> b[205][20];
int main(){
	n=read();
	FOR(i,1,n) {
		scanf("%s",s+1); a[i]=m=strlen(s+1);
		FOR(len,1,min(m,N)) {
			FOR(j,1,m+1-len) {
				int y=0;
				FOR(x,j,j+len-1) y=y<<1|(s[x]-'0');
				b[i][len][y]=1;
			}
		}
		int z=min(N,m);
		FOR(j,1,z) h[i][j]=s[j],t[i][N+j-z]=s[m+j-z];
	}
	//FOR(i,1,n) printf("%s %s\n",h[i]+1,t[i]+N+1-a[i]);
	m=read();
	FOR(i,n+1,n+m) {
		int x,y;
		x=read(); y=read();
		FOR(j,1,N) h[i][j]=h[x][j],t[i][j]=t[y][j];
		a[i]=min(N,a[x]+a[y]);
		FOR(j,1,N) b[i][j]=b[x][j]|b[y][j];
		if (a[x]<N)
			FOR(j,1,min(N-a[x],a[y])) h[i][a[x]+j]=h[y][j];
		if (a[y]<N) {
			int z=min(N-a[y],a[x]);
			FOR(j,1,z) t[i][N-a[y]+j-z]=t[x][N+j-z];
		}
		//printf("%s %s\n",h[i]+1,t[i]+N+1-a[i]);
		//printf("ok2\n");
		FOR(len,1,min(N,a[x])) {
			int z=0;
			FOR(j,N+1-len,N) z=z<<1|(t[x][j]-'0');
			FOR(l,1,min(a[y],N-len)) {
				z=z<<1|(h[y][l]-'0');
				//printf("%d ",z);
				b[i][l+len][z]=1;
			}
		}
		//printf("ok3\n");
		int ans=0;
		FOR(len,1,N) {
			bool ok=1;
			FOR(x,0,(1<<len)-1) if (b[i][len][x]==0) { ok=0; break; }
			if (ok) ans++; else break;
		}
		cout<<ans<<endl;
	}
	return 0;
}

/*
2
11111111110000010000010001000110001010101111100101010100101101101101100100100110110
00110001001111000
100
2 2
3 3
4 4
4 4
5 6
7 6
8 8
9 9
9 8
10 11
12 12
13 10
14 13
15 10
16 15
17 17
18 18
14 19
17 15
19 19
22 22
20 23
24 22
25 19
26 26
26 27
24 21
28 28
27 30
31 21
31 32
33 31
34 21
32 35
34 35
36 30
36 36
39 38
37 39
41 41
30 40
30 43
44 44
43 44
44 46
47 45
47 43
49 29
44 34
51 33
43 43
49 47
54 54
23 53
52 52
54 51
43 38
56 50
60 57
17 15
19 19
22 22
20 23
24 22
25 19
26 26
26 27
24 21
28 28
27 30
31 21
31 32
33 31
34 21
32 35
34 35
36 30
36 36
39 38
37 39
41 41
30 40
30 43
44 44
43 44
44 46
47 45
47 43
49 29
44 34
51 33
43 43
49 47
54 54
23 53
52 52
54 51
43 38
56 50
60 57

*/
