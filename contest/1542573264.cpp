#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
#include<set>
#include<cstdio>
#include<functional>
#include<iomanip>
#include<cmath>
#include<stack>
//#define mod 1030
#define size 3
using namespace std;
typedef long long LL;
const int maxn = 1e5 + 100;
const int maxm = 50000;
const LL inf = (LL)6 * LL(1e18);
const double eps = 1e-8;
int dp[20];
int main() {
	int n, k;
	while (scanf("%d%d", &n, &k) == 2) {
		int cnt = 0, x;
		for (int i = 1; i <= n; i++) {
			cnt = 0;
			for (int j = 1; j <= k; j++) {
				scanf("%d", &x);
				cnt += (1 << (j - 1))*x;
			}
			dp[cnt] = 1;
		}
		bool flag = false;
		for (int i = 0; i < 16; i++)
			for (int j = 0; j < 16; j++)
				if ((i&j) == 0 && dp[i] && dp[j])
					flag = true;
		printf("%s\n", flag ? "YES" : "NO");
	}
}