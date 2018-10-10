#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
typedef long long ll;
typedef vector<int> VI;
typedef pair<int, int> PII;
const ll MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e6 + 7;
// head

char s[MAXN];
int Next[MAXN];
int Hash[MAXN];

void buildNext(char P[]) {
	int m = strlen(P);
	int i = 0, j;
	j = Next[0] = -1;
	while (i < m) {
		while (-1 != j && P[i] != P[j]) j = Next[j];
		Next[++i] = ++j;
	}
}

int main() {
	scanf("%s", s + 1);
	buildNext(s + 1);
	int n = strlen(s + 1);
	rep(i, 2, n) Hash[Next[i]] = 1;
	int x = Next[n];
	while (!Hash[x] && x) x = Next[x];
	if (!x) return puts("Just a legend"), 0;
	rep(i, 1, x + 1) printf("%c", s[i]);
	return 0;
}