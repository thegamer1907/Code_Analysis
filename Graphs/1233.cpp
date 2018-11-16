#include <stdio.h>
#include <bitset>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <string.h>
#include <string>
#include <iostream>
#include <stack>
#include <ctype.h>
#include <algorithm>
#include <deque>
#include <functional>
#include <math.h>
#include <stdlib.h>

#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define pll pair<ll,ll>

using namespace std;

const int N = 3e4 + 2;

int n, dist, x;
vector<int> Adjlist[N];
int visited[N];
int flag;

void DFSList(int u)
{
	if(u == dist) flag = 1;;
	visited[u] = 1;
	for(int v : Adjlist[u])
		if(!visited[v])
			DFSList(v);
}

int main()
{
	//freopen("", "r", stdin);
	//freopen("", "w", stdout);
	scanf("%d%d", &n, &dist);
	//New Year Transportation Good Bye 2014
	for(int i = 1; i <= n - 1; i++)
	{
		scanf("%d", &x);
		Adjlist[i].push_back(x + i);
	}
	DFSList(1);
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}