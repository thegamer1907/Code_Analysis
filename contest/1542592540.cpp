/*
Thank you for your hacking.
Hope you high rating.
*/
#include <bits/stdc++.h>
using namespace std;
#define pr(x) cerr << #x << " = " << x << endl;
#define bug cerr << "bugbug" << endl;
#define ppr(x, y) printf("(%d, %d)\n", x, y);
#define mst(a,b) memset(a,b,sizeof(a))
#define clr(a) mst(a,0)
#define sqr(a) ((a)*(a))
#define PCUT puts("\n---------------")


typedef complex<double> dcomplex;
typedef long long ll;
typedef double DBL;
typedef pair<int, int> P;
typedef unsigned int uint;
const double pi = acos(-1.0);
const double eps = 1e-12;
const int MOD = 1e9 + 7;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int maxn = 1e3 + 4;
const int maxm = 1e4 + 4;
inline long long rule(long long x){	return (x %= MOD) += x < 0 ? MOD : 0;}

char pass[3], t[3];
int main(){
	int ik, i, j, k, kase;
	cin >> pass;
	scanf("%d", &k);
	bool ok1 = false, ok2 = 0, ok = 0;
	while(k--){
		cin >> t;
		if (strcmp(t, pass) == 0) ok = true;
		if (t[1] == pass[0]) ok1 = true;
		if (t[0] == pass[1]) ok2 = true;
	} 
	if (ok || (ok1 && ok2)) puts("YES");
	else puts("NO");
 	return 0;
}

