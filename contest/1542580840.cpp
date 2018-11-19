#define _CRT_SECURE_NO_DEPRECATE
#pragma comment(linker, "/STACK:167772160000")
#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <list>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <iomanip>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <stack>
#include <sstream>
#include <assert.h>
#include <functional>
#include <climits>
#include <cstring>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
//typedef uint64_t ull;
//typedef std::pair<long double,long double> pdd;
#define fori(N)          for(int i = 0; i<(N); i++)
#define forj(N)         for(int j = 0; j<(N); j++)
#define fork(N)         for(int k = 0; k<(N); k++)
#define forl(N)         for(int l = 0; l<(N); l++)
#define ford(N)         for(int d = 0; d<(N); d++)
#define fori1(N)          for(int i = 1; i<=(N); i++)
#define forj1(N)         for(int j = 1; j<=(N); j++)
#define fork1(N)         for(int k = 1; k<=(N); k++)
#define ford1(N)         for(int d = 1; d<=(N); d++)
#define forl1(N)         for(int l = 1; l<=(N); l++)
#define PI (2*asin(1))
#define print(n) printf("%d ", (n))
#define printll(n) printf("%I64d ", (n))
#define printline() printf("\n")
#define read(n) scanf("%d", &n);
#define read2(n, m) scanf("%d%d", &n, &m);
#define readll(n) scanf("%I64d", &n);
#define mp make_pair
bool isLeaf[60];

vector<pii>edges[60];
int dist[60][60];
ll dp[100][100];
void getDist(int a, int par, int curD, int v) {
	dist[a][v] = curD;
	for (auto x : edges[a]) {
		if (x.first == par)continue;
		getDist(x.first, a, curD + x.second,v);
	}
	if (edges[a].size() == 1)isLeaf[a] = true;
}
int n, m;
vector<int>worstDist[60];
ll getBest(int a, int totalNum, int curNum, vector<int>available) {
	priority_queue<pair<ll,pii> >options;
	for (auto x : available) {
		options.push(mp(dist[a][x]+dp[x][totalNum-1],mp(x, 1)));
	}
	ll answer = 1E17;
	fori(curNum) {
		pair<ll, pii>cur = options.top();
		options.pop();
		answer = cur.first;
		cur.second.second++;
		cur.first = dist[a][cur.second.first] + dp[cur.second.first][totalNum - cur.second.second];
		options.push(cur);
	}
	return answer;

}
int badCnt[60];
int cnt;
vector<int>av;
void dfs(int a, int par) {
	if (isLeaf[a])av.push_back(a);
	cnt += badCnt[a];
	for (auto x : edges[a]) {
		if (x.first == par)continue;
		dfs(x.first, a);
	}
}

int main()
{
#if defined(_DEBUG)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	fori(n - 1) {
		int a, b; cin >> a >> b;
		int c; cin >> c;
		edges[a].push_back(mp(b, c));
		edges[b].push_back(mp(a, c));
	}
	int s; cin >> s;
	cin >> m;
	fori1(n)getDist(i, i, 0,i);
	fori1(n)forj1(n)
		worstDist[i].push_back(dist[i][j]);
	vector<int>tmp;
	fori1(n)if(isLeaf[i])tmp.push_back(i);

	fori1(n)dp[i][0] = 0;
	fori1(m)forj1(n) {
		if (!isLeaf[j])continue;
		dp[j][i] = getBest(j, i, i, tmp);
	}
	fori1(m) {
		int a; cin >> a;
		badCnt[a]++;
	}
	ll answer = 5E18;
	for (auto x : edges[s]) {
		av.clear();
		cnt = 0;
		dfs(x.first,s);
		answer = min(answer, getBest(s, m, cnt, av));
	}
	cout << answer << endl;
	return 0;
}