
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
#include <map>
#define max(x, y) (x > y ? x : y)
#define min(x, y) (x > y ? y : x)
#define INF 0x3f3f3f3f
#define mod 1000000007
#define Yes printf("Yes\n")
#define No printf("No\n")
typedef long long LL;
using namespace std;

const int maxn  = 2e5 + 10;
int a[maxn];
map<LL, LL> b, c;
int n, k;
LL ans;

void solve() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        
        
        if (a[i] % (k * k) == 0) {
            ans += c[a[i] / k];
        }
        if (a[i] % k == 0) c[a[i]] += b[a[i] / k];
        b[a[i]]++;
    }
    printf("%lld\n", ans);
}


int main(int argc, const char * argv[]) {
    solve();
    return 0;
}

