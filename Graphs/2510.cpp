#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <climits>
#include <cstdlib>
 
const double Pi=acos(-1.0);
typedef long long LL;
 
#define Set(a, s) memset(a, s, sizeof (a))
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)
 
using namespace std;
 
const int maxN=10005;

int n;
vector<int> G[maxN];
int col[maxN];

int ans;

void dfs (int cur, int pre) {
	if (col[cur]!=col[pre])
		ans++;
	for (int i=0; i<(int)G[cur].size(); i++) 
		dfs(G[cur][i], cur);
}

int main (int argc, char ** argv) {
	scanf("%d", &n);
	int p;
	for (int i=2; i<=n; i++) {
		scanf("%d", &p);
		G[p].push_back(i);
	}
	for (int i=1; i<=n; i++)
		scanf("%d", &col[i]);
	dfs(1, 0);
	printf("%d\n", ans);
	return 0;
}

