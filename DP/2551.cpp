#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
typedef double lf;
typedef long double Lf;
typedef pair <int,int> pii;
typedef pair <ll, ll> pll;

#define TRACE(x) cerr << #x << "  " << x << endl
#define FOR(i, a, b) for (int i = (a); i < int(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define _ << " " <<

#define fi first
#define sec second
#define mp make_pair

const int MAXN = 100100;

int n, p[MAXN];

int main() {
	scanf("%d",&n);
	REP(i, n) scanf("%d",&p[i]);
	int tmp = 0;
	int sol = 0;

	tmp = 1;
	FOR(i, 1, n) {
		sol = max(sol, tmp);
		if (p[i] > p[i - 1]) tmp++;
		else tmp = 1;
	}
	sol = max(sol, tmp);
	printf("%d\n",sol);
	return 0;
}
