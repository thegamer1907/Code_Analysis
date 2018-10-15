#include <bits/stdc++.h>

#define FOR(i, a, n) for (int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(), a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define dbg(x) cerr << ">>>> " << x << endl;
#define _ << " , " <<
#define mp make_pair
#define mt make_tuple
#define x first
#define y second
#define ii pair<int, int>
#define iii pair<ii, int>
#define point pair<double, double>
#define maxn 500050
#define MOD 1000000007
#define PI 3.14159265358979323846264338327950288
#define HASH 26

typedef unsigned long long llu;
typedef long long int ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-9;
const int mod = 1000000007;

using namespace std;

int n;
string mat[maxn];

void change(string &a, string &b){
	int sa = a.size(), sb = b.size(), i = 0;
	string res;
	for(;i < min(sa,sb); ++i){
		if(a[i] != b[i]) break;
		res.pb(a[i]);
	}
	
	if(i == min(sa,sb) || a[i] < b[i]) b = res;
}

int main(){
	int n; cin >> n;
	REP(i,n) cin >> mat[i];
	for(int i = n-1; i >= 1; i--) change(mat[i], mat[i-1]);
	REP(i,n) cout << mat[i] << endl;
	return 0;
}




















