#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <memory.h>
#include <math.h>
#include <assert.h>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> Pi;
typedef pair<ll,ll> Pll;

#define Fi first
#define Se second
#define pb(x) push_back(x)
#define sz(x) (int)x.size()
#define rep(i, n) for(int i=0;i<n;i++)
#define repp(i, n) for(int i=1;i<=n;i++)
#define all(x) x.begin(), x.end()

#define ABS(x) (((x) > 0 ) ? (x) : (-(x)))
#define MAX2(x, y) (((x) > (y)) ? (x) : (y))
#define MIN2(x, y) (((x) < (y)) ? (x) : (y))
#define MAX3(x, y, z) ( (x) > (y)  ? ( (x) > (z) ? (x) : (z)  ) : ( (y) > (z) ? (y) : (z) )  )
#define MIN3(x, y, z) ( (x) < (y)  ? ( (x) < (z) ? (x) : (z)  ) : ( (y) < (z) ? (y) : (z) )  )
#define MID3(val1,val2,val3) MAX2(MIN2(MAX2(val1,val2),val3),MIN2(val1,val2))


#define geti1(X) scanf("%d",&X)
#define geti2(X,Y) scanf("%d%d",&X,&Y)
#define geti3(X,Y,Z) scanf("%d%d%d",&X,&Y,&Z)
#define geti4(X,Y,Z,W) scanf("%d%d%d%d",&X,&Y,&Z,&W)

#define GET_MACRO(_1,_2,_3,_4,NAME,...) NAME
#define geti(...) GET_MACRO(__VA_ARGS__, geti4, geti3, geti2, geti1) (__VA_ARGS__)

#define INF 987654321
#define IINF 987654321987654321

#define MAXN 100500

char s[1000][1000];
int garo[1000][1000], sero[1000][1000];
int sg[1000][1000], ss[1000][1000];
int main(void){
	int n,m; geti(n,m);
	repp(i,n) scanf("%s",s[i]+1);
	int k; geti(k);
	repp(i,n) repp(j,m){
		if( s[i][j] == '.' && s[i+1][j] == '.' ) sero[i][j] = 1;
	}
	repp(i,n) repp(j,m) if( s[i][j] == '.' && s[i][j+1] == '.' ) garo[i][j] = 1;

	repp(i,n) repp(j,m){
		if( i != 0 ){
			sg[i][j] += sg[i-1][j] + garo[i][j];
			ss[i][j] += ss[i-1][j] + sero[i][j];
		}
		if( j != 0 ){
			sg[i][j] += sg[i][j-1] ;
			ss[i][j] += ss[i][j-1] ;
		}
		if( i != 0 && j != 0 ){
			sg[i][j] -= sg[i-1][j-1];
			ss[i][j] -= ss[i-1][j-1];
		}
	}

	rep(i,k){
		int a,b,c,d; geti(a,b,c,d);
		//a--;b--;c--;d--;
		int ans = 0;
		ans += sg[c][d-1] - sg[a-1][d-1] - sg[c][b-1] + sg[a-1][b-1];
		ans += ss[c-1][d] - ss[a-1][d] - ss[c-1][b-1] + ss[a-1][b-1];
		printf("%d\n",ans);
	}
}