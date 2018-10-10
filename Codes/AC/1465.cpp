#include "cstdio"
#include "cstring"
#include "algorithm"
#include "vector"
using namespace std;
typedef long long LL;
const int maxn = 1e5+10;
LL n;
LL s;
LL mid;
LL huan;
struct node
{
    LL f;
    LL pos;
}thing[maxn];
bool cmp(node a,node b) {
    return (a.pos * mid + a.f) < (b.pos * mid + b.f);
}
int check() {
    sort(thing + 1, thing + 1 + n, cmp);
    LL sum = 0;
    for (int i = 1; i <= mid; i++) {
        LL a = thing[i].pos * mid + thing[i].f;
        sum += a;
        if(sum>s)return 0;
    }
    if (sum > s)return 0;
    else {
        huan = sum;
        return 1;
    }
}
int main() {
    scanf("%lld%lld", &n, &s);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &thing[i].f);
        thing[i].pos = i;
    }
    LL l = 0, r = n;
    while ((r - l) != 1) {
        mid = (r + l) >> 1;
        if (check())l = mid;
        else r = mid;
    }
    LL ans;
    mid = r;
    if (check()) {
        ans = r;
    } else {
        mid = l;
        if (check())ans = l;
    }
    printf("%lld %lld\n", ans, huan);
    return 0;
}