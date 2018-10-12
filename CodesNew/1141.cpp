#include <cstdio>
#include <cstring>
#include <queue>
#include <cmath>
#include <algorithm>
#include <set>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
#define  pi acos(-1.0)
#define  eps 1e-6
#define  fi first
#define  se second
#define  lson l,m,rt<<1
#define  rson m+1,r,rt<<1|1
#define  bug         printf("******\n")
#define  mem(a,b)    memset(a,b,sizeof(a))
#define  name2str(name) (#name)
#define  fuck(x)     cout<<#x" = "<<x<<endl
#define  sf(n)       scanf("%d", &n)
#define  sff(a,b)    scanf("%d %d", &a, &b)
#define  sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define  sffff(a,b,c,d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define  FIN         freopen("DATA.txt","r",stdin)
#define  gcd(a,b)    __gcd(a,b)
#define  lowbit(x)   x&-x
#define  IO       ios::sync_with_stdio(false);
#pragma  comment (linker,"/STACK:102400000,102400000")
using namespace std;
typedef long long  LL;
typedef unsigned long long ULL;
const int INF = 0x7fffffff;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 10;
LL n;
int check(LL mid) {
    LL sum = 0, cnt = n;
    while(cnt) {
        LL temp = min(mid, cnt);
        cnt -= temp;
        sum += temp;
        cnt = cnt - cnt / 10;
    }
    if (sum * 2 >= n) return 1;
    else return 0;
}
int main() {
    scanf("%lld", &n);
    LL high = n, low = 1, mid, ans = 0;
    for (int i = 1 ; i <= 100 ; i++) {
        mid = (low + high) >> 1;
        if (!mid) break;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }
    printf("%lld\n", ans);
    return 0;
}
