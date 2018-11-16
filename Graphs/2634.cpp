#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
#include <stack>
#include <queue>
#include <set>
#include <list>
#include <bitset>

using namespace std;

#define fi first
#define se second
#define long long long
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
ii operator+ (ii a, ii b) { return {a.fi+b.fi,a.se+b.se}; }

int par[10003];
int parent(int u) {return par[u] = (par[u] == u)? u : parent(par[u]); }
void gab(int u, int v) {par[parent(u)] = parent(v);}

set<int> st;

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);

	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++) par[i] = i;
	for(int i = 1; i <= n; i++)
	{
		int v;
		scanf("%d", &v);
		gab(i,v);
	}
	for(int i = 1; i <= n; i++) st.insert(parent(i));
	printf("%d\n", (int)st.size());
}










