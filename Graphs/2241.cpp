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

int n;
int p[2005];

vector<int> G[2005];

int ans;

void dfs (int cur, int depth) {
	ans=max(ans, depth);
	for (int i=0; i<(int)G[cur].size(); i++) 
		dfs(G[cur][i], depth+1);
}

int main (int argc, char ** argv) {
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &p[i]);
		if (p[i]>0)
			G[p[i]-1].push_back(i);
	}
	for (int i=0; i<n; i++) {
		if (p[i]==-1)
			dfs(i, 1);
	}
	printf("%d\n", ans);
	return 0;
}

