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

int a[110000];
int curAm[110000];
ll curCost;
int curBeg, curEnd;

void moveTo(int beg, int end) {
	while (curEnd < end) {
		++curEnd;
		curCost += curAm[a[curEnd]]++;
	}
	while (curBeg > beg) {
		--curBeg;
		curCost += curAm[a[curBeg]]++;
	}
	while (curEnd > end) {
		curCost -= --curAm[a[curEnd]];
		--curEnd;
	}
	while (curBeg < beg) {
		curCost -= --curAm[a[curBeg]];
		++curBeg;
	}
}
pll dp[110000][30];


void calc(int beg1, int end1, int beg2, int end2, int ind) {
	if (beg1 > end1)return;
	int mid = (beg1 + end1) / 2;
	int from = beg2;
	int to = min(end2, mid);
	dp[mid][ind] = pll(1E15, 1E15);
	moveTo(to + 1, mid);
	while (curBeg > from) {
		--curBeg;
		curCost += curAm[a[curBeg]]++;
		dp[mid][ind] = min(dp[mid][ind], pll(curCost + dp[curBeg - 1][ind - 1].first, curBeg));
	}
	calc(beg1, mid - 1, beg2, dp[mid][ind].second, ind);
	calc(mid+1, end1, dp[mid][ind].second, end2, ind);
}
int main()
{
#if defined(_DEBUG)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false); cin.tie(0);

	int n,k; cin >> n>>k;
	fori1(n)cin >> a[i];
	curBeg = 1;
	curEnd = 0;
	fori(n + 1)forj(k + 2)dp[i][j].first = 1E15;
	while (curEnd < n) {
		++curEnd;
		curCost += curAm[a[curEnd]]++;
		dp[curEnd][1] = pll(curCost, 1);
	}
	for (int j = 2; j <= k; j++) {
		calc(1, n, 1, n, j);
	}
	cout << dp[n][k].first << endl;
	return 0;
}