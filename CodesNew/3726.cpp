#include <bits/stdc++.h>
#define eps 1e-8
#define INF 0x3f3f3f3f
#define PI acos(-1)
#define lson l,mid,rt<<1
#define rson mid+1,r,(rt<<1)+1
#define CLR(x,y) memset((x),y,sizeof(x))
#define fuck(x) cerr << #x << "=" << x << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int seed = 131;
const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
int n, m;
int a[maxn];
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    sort(a + 1, a + 1 + n);
    int MAX = a[n];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += MAX - a[i];
    }
    if (ans > m) {
        printf("%d ", a[n]);
    } else {
        int x=m;
        x -= ans;
        x = (x + n - 1) / n;
        printf("%d ", a[n] + x);
    }
    printf("%d\n", a[n] + m);
    return 0;
}


