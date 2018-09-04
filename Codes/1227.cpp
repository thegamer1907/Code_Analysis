#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

#define pb push_back
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x),ri(y)
#define ms(obj,val) memset(obj,val,sizeof(obj))
#define ms2(obj,val,sz) memset(obj,val,sizeof(obj[0])*sz)
#define FOR(i,f,t) for(int i=f;i<(int)t;i++)
#define FORR(i,f,t) for(int i=f;i>(int)t;i--)

typedef long long ll;
typedef vector<int> vi;

const int MAXN=1e3;

int N,M,C=0;
string S1[MAXN];
string S2[MAXN];
set<string> SS1,SS2;

int main() {
	cin >> N >> M;
	FOR(i,0,N) cin >> S1[i];
	FOR(i,0,M) cin >> S2[i];
	FOR(i,0,N) SS1.insert(S1[i]);
	FOR(i,0,M) SS2.insert(S2[i]);
	FOR(i,0,N) if(SS2.find(S1[i]) != SS2.end()) C++;
	N -= C; M -= C;
	if(C == 0) printf("%s\n", N > M ? "YES" : "NO");
	else if(N == 0 && M == 0) printf("%s\n", C & 1 ? "YES" : "NO");
	else if(N == 0) printf("NO\n");
	else if(M == 0) printf("YES\n");
	else if(C &  1) printf("%s\n", N >= M ? "YES" : "NO");
	else printf("%s\n", N > M ? "YES" : "NO");
}
