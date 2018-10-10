#include <iostream>
#include <istream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <queue>
#include <stack>
#include <list>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vi lnum;
typedef long double ld;

#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define pb push_back
#define mp make_pair
#define pi 3.14159265358979
#define fopen freopen("input.txt", "r", stdin); freopen("output.txt","w", stdout)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define FORR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define REP(i, N) FOR(i, 0, N)
#define REPR(i, N) RFOR(i, N, 0)
#define FILL(A,value) memset(A,value,sizeof(A))
#define f first
#define s second

const int MOD9 = 1e9+7;
const int MOD91 = 1e9+9;
const ll MOD12 = 1e12+39LL;
const ll MOD15 = 1e15+37LL;
const int INF = 1e9;
const int base = 1e9;
const int MAX = 2e5;
const ld EPS = 1e-10;

int n,m;
int pref[100100];
int a[100100];
int b[100100];
int main() {
	scanf("%d", &n);
	FOR(i,0,n) {
		scanf("%d", &a[i]);
		if (!i) {
			pref[i] = a[i];
		}else {
			pref[i] = pref[i-1]+a[i];
		}
	}
	scanf("%d", &m);
	FOR(i,0,m) {
		scanf("%d", &b[i]);
		int pos = lower_bound(pref, pref+n, b[i]) - pref;
		cout << pos+1 << endl;
	}

	return 0;
}
