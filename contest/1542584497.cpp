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

struct Problem{
	int tag[4];
}pro[16];
int n, kind;
int cnt[16];
int main(){
	int ik, i, j, k, kase;
	scanf("%d%d", &n, &kind);
	for (int i = 0; i < n; ++i){
		int x[4], val = 0;
		for (int j = 0; j < kind; ++j){
			val *= 2;
			scanf("%d", x+j);
			val += x[j];
		}
		cnt[val]++;
		for (int j = 0; j < kind; ++j)
			pro[val].tag[j] = x[j];
			 
	}
	int tot = 1 << kind;
	int limit = 1 << tot;
	for (int i = 1; i < limit; ++i){
		vector<int> v;
		for (int j = 0; j < tot; ++j)
			if (i >> j & 1) v.push_back(j);
		bool ok = true;
		for (auto x : v)
			if (cnt[x] == 0) ok = false;
		if (!ok) continue;
		int allcnt = v.size() / 2;
		int t[4] = {0, 0, 0, 0};
		for (auto x : v)
			for (int j = 0; j < 4; ++j)
				t[j] += pro[x].tag[j];
		for (int j = 0; j < kind; ++j)
			if (t[j] > allcnt) ok = false;
		if (ok){
//			for (auto x : v){
//				for (int j = 0; j < kind; ++j)
//				cout << pro[x].tag[j] << ' ';
//				cout << endl;
//			}
			
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}

