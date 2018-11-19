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
typedef pair<double, int> P;
typedef unsigned int uint;
const double pi = acos(-1.0);
const double eps = 1e-12;
const int MOD = 1e9 + 7;
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int maxn = 1e3 + 4;
const int maxm = 1e4 + 4;
inline long long rule(long long x){	return (x %= MOD) += x < 0 ? MOD : 0;}

vector<P> v;

int main(){
	int ik, i, j, k, kase;
	double h, m, s;
	cin >> h >> m >> s;
	v.push_back(P(h*30+m/2+s/120, 1));
	v.push_back(P(m*6+s/10, 2));
	v.push_back(P(s*6, 3));
	int t1, t2;
	cin >> t1 >> t2;
	v.push_back(P(t1*30, 4));
	v.push_back(P(t2*30, 5));
	sort(v.begin(), v.end());
	v.push_back(v[0]);
	for (int i = 0; i < 5; ++i)
		if (v[i].second + v[i+1].second == 9){
			puts("YES");
			return 0; 
		}
 	puts("NO");
	return 0;
}

