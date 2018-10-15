#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <queue>
#define CLR(a, b) memset(a, (b), sizeof(a))
#define fi first
#define se second
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
const int MAXN = 1e6 +10;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
void add(LL &x, LL y) { x += y; x %= MOD; }
char str[MAXN];
int sum[MAXN];
int Find(int l, int r, int p, int v) {
    int ans = r + 1;
    while(r >= l) {
        int mid = (l + r) >> 1;
        if(sum[mid] - sum[p-1] >= v) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int k;
    while(scanf("%d", &k) != EOF) {
        scanf("%s", str+1);
        int len = strlen(str+1); sum[0] = 0;
        for(int i = 1; i <= len; i++) {
            sum[i] = sum[i-1] + (str[i] == '1');
        }
        LL ans = 0;
        for(int i = 1; i <= len; i++) {
            int s = Find(i, len, i, k);
            if(s == len + 1) continue;
            int t = Find(i, len, i, k+1);
            ans += t - s;
        }
        printf("%lld\n", ans);
    }
    return 0;
}