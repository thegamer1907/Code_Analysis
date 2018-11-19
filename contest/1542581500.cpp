#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
#include <bitset>

using namespace std;
#define LL long long
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define pill pair<int, int>
#define mst(a, b)	memset(a, b, sizeof a)
#define REP(i, x, n)	for(int i = x; i <= n; ++i)
const int MOD = 1e9 + 7;
const int qq = 1e5 + 10;
const LL INF = 1e9 + 10;
int dp[105];

int main(){
	int n, k;	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; ++i) {
		int m = 0;
		for(int x, j = k - 1; j >= 0; --j) {
			scanf("%d", &x);
			if(x)	m += (1 << j);
		}
//		printf("%d\n", m);
		dp[m]++;
	}
	if(dp[0]) {
		puts("YES");
		return 0;
	}
	if(k == 1) {
		puts("NO");
	} else {
		bool f = false;
		for(int i = 0; i < (1 << k); ++i) {
			for(int j = 0; j < (1 << k); ++j) {
				if((i & j) == 0 && i != j) {
	//				printf("%d %d\n", i, j);
					if(dp[i] && dp[j])	f = true;
				}
			}
		}
		if(f)	puts("YES");
		else	puts("NO");
	} 
	return 0;
}