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
#include <array>

using namespace std;

#define fi first	
#define se second
#define long long long
typedef pair<int,int> ii;

int arr[100003];
vector<ii> vec[100003];

int cnt = 0;
void dfs(int u, long dis)
{
	if(dis > arr[u]) return;
	
	cnt++;
	for(ii nxt : vec[u])
		dfs(nxt.fi, max(0LL,dis+nxt.se));
}

int main()
{
	// ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.in", "r", stdin);
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		scanf("%d", &arr[i]);

	for(int i = 2; i <= n; i++)
	{
		int p, val;
		scanf("%d %d", &p, &val);
		vec[p].push_back({i,val});
	}
	dfs(1,0);
	printf("%d\n", n-cnt);
}




