#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i = 0; i < n; i++)
#define pii pair<int, int>
typedef long long LL;

const int MX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
#ifdef DEBUG
    freopen("in.txt", "r", stdin);
#endif
    int n, k;
    scanf("%d%d", &n, &k);
    int cnt[16]; memset(cnt, 0, sizeof(cnt));
    loop(i, n) {
        int msk = 0;
        loop(j, k) {
            int val; scanf("%d", &val);
            msk += val * (1 << j);
        }
        cnt[msk]++;
    }
    if (cnt[0]) { printf("YES\n"); return 0; }
    for (int i = 0; i < (1 << k); i++) {
        for (int j = i + 1; j < (1 << k); j++) {
            if (cnt[i] && cnt[j]) {
                bool flag = true;
                loop(x, k) if (((i >> x) & 1) && ((j >> x) & 1)) flag = false;
                if (flag) { printf("YES\n"); return 0; }
            }
        }
    }
    printf("NO\n");
    return 0;
}