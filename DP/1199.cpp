#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long LL;
typedef pair<LL, LL> pLL;
typedef pair<LL, int> pli;
typedef pair<int, LL> pil;;
typedef pair<int, int> pii;
typedef unsigned long long uLL;

#define lson rt<<1
#define rson rt<<1|1
#define lowbit(x) x&(-x)
#define name2str(name) (#name)
#define bug printf("*********\n");
#define debug(x) cout<<#x"=["<<x<<"]" <<endl;
#define FIN freopen("D://code//in.txt", "r", stdin);
#define FOUT freopen("D://code//out.txt", "w", stdout);
#define IO ios::sync_with_stdio(false),cin.tie(0);

const double eps = 1e-8;
const int mod = 1000000007;
const int maxn = 500 + 7;
const double pi = acos(-1);
const int inf = 0x3f3f3f3f;
const LL INF = 0x3f3f3f3f3f3f3f3fLL;

int n, num;
int a[105], sum[105];

int main() {
#ifndef ONLINE_JUDGE
	FIN;
#endif
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if(a[i]) sum[i] = sum[i-1]+1;
		else sum[i] = sum[i-1];
	}
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = n; j >= i; j--) {
			ans = max(ans, sum[i-1] + (sum[n] - sum[j]) + (j - i + 1 - (sum[j] - sum[i-1])));
		}
	}
	printf("%d\n", ans);
	return 0;
}