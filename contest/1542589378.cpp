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
const int maxn = (LL)1e5 + 100;
const int maxm = 50000;
const LL inf = (LL)6 * LL(1e18);
const double eps = 1e-8;
char ori[3], par[110][3];
int main() {
	while (scanf("%s", ori) == 1) {
		int n;
		bool flag = false;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%s", par[i]);
			if (strcmp(ori, par[i]) == 0) flag = true;
		}
		if (flag) {
			printf("YES\n");
			continue;
		}
		for (int i = 0; i < n; i++) {
			if (ori[0] != par[i][1]) continue;
			int k = i;
			for (int j = 0; j < n; j++) {
				//if (k == j) continue;
				if (ori[1] == par[j][0]) {
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
		printf("%s\n", flag ? "YES" : "NO");
	}
}