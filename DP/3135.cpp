#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

#define pb push_back
#define rs(x) scanf("%s",x)
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x),ri(y)
#define ms(obj,val) memset(obj,val,sizeof(obj))
#define ms2(obj,val,sz) memset(obj,val,sizeof(obj[0])*sz)
#define FOR(i,f,t) for(int i=f;i<(int)t;i++)
#define FORR(i,f,t) for(int i=f;i>(int)t;i--)

typedef long long ll;
typedef vector<int> vi;

const int MAXN=510;

int ans,Q;
int r1,r2,c1,c2;
int R,C,cnt[MAXN][MAXN];
int cntR[MAXN][MAXN],cntC[MAXN][MAXN];
char A[MAXN][MAXN];

int main() {
	rii(R,C);
	FOR(r,1,R+1) rs(A[r]);
	FOR(r,1,R+1) FORR(c,C,-1) A[r][c+1] = A[r][c];
	FOR(r,1,R+1) FOR(c,1,C+1) {
		cnt[r][c] = 0;
		if(A[r][c] == '.' && A[r][c+1] == '.') cnt[r][c]++;
		if(A[r][c] == '.' && A[r+1][c] == '.') cnt[r][c]++;
	}
	FOR(r,1,R+1) FOR(c,1,C+1) cnt[r][c]  += cnt[r-1][c]  + cnt[r][c-1] - cnt[r-1][c-1];
	FOR(r,1,R+1) FOR(c,1,C+1) cntC[r][c]  = cntC[r][c-1] + (A[r][c] == '.' && A[r][c+1] == '.');
	FOR(r,1,R+1) FOR(c,1,C+1) cntR[r][c]  = cntR[r-1][c] + (A[r][c] == '.' && A[r+1][c] == '.');
	ri(Q);
	while(Q--) {
		rii(r1,c1),rii(r2,c2);
		if(r1 == r2 && c1 == c2) ans = 0;
		else if(r1 == r2) ans = cntC[r2][c2-1] - cntC[r1][c1-1];
		else if(c1 == c2) ans = cntR[r2-1][c2] - cntR[r1-1][c1];
		else {
			ans  = cnt[r2-1][c2-1] - cnt[r1-1][c2-1] - cnt[r2-1][c1-1] + cnt[r1-1][c1-1];
			ans += cntC[r2][c2-1] - cntC[r2][c1-1];
			ans += cntR[r2-1][c2] - cntR[r1-1][c2];
		}
		printf("%d\n",ans);
	}
}
