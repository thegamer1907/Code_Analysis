#include <stdio.h>
#include <stack>
#include <map>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <climits>
#include <unordered_map>
#include <iterator> 
using namespace std;
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define inf32 INT_MAX
#define inf64 LLONG_MAX
#define PI acos(-1)
#define cos45 cos(PI/4)
#define ld long double
const int mod = (1e9) + 7;
const double eps = 1e-9;
const int siz = 1e5 + 5, siz2 = 1e5 + 5;
int dp[2005][2005], n, k;
int main()
{
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		dp[i][1] = 1;
	}
	for (int i = 2; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			for (int l = 1; l <= n / j; l++) {
				dp[l*j][i] = ((ll)dp[l*j][i] + dp[j][i - 1]) % mod;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans = ((ll)ans + dp[i][k]) % mod;
	}
	printf("%d\n", ans);
	return 0; 
}