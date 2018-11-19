#include<bits/stdc++.h>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int MX = 1e5 + 5;
int cnt[16];
int main() {
    //freopen("in.txt", "r", stdin);
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) {
        int mark = 0, x;
        for (int j = 0; j < k; j++) {
            scanf("%d", &x);
            mark |= (x << j);
        }
        cnt[mark]++;
    }
    int flag = 0;
    if (cnt[0]) flag = 1;
    else {
        for (int S = 1; S < (1 << k); S++) {
            if (!cnt[S]) continue;
            for (int x = 1; x < (1 << k); x++) {
                if ((x & S) == 0 && cnt[x]) flag = 1;
            }
        }
    }
    printf("%s\n", flag ? "YES" : "NO");
    return 0;
}
