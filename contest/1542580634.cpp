#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pii pair<int, int>
#define mkp make_pair
#define sz(x) ((int)x.size())
#define mem(x, y) memset(x, y, sizeof(x))
#define pb push_back
const int N = 20;
bool has[N];
int n, k, cnt[N];

int main()
{
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++) {
        int hs = 0;
        for(int j = 0; j < k; j++) {
            int p; scanf("%d", &p);
            hs |= (p << j);
        }
        has[hs] = 1;
    }
    bool yes = 0;
    int tot = 1 << k;
    for(int i = 0; i < 1 << tot; i++) {
        mem(cnt, 0);
        int choose = 0;
        for(int j = 0; j < tot; j++) {
            if((i >> j & 1) && has[j]) {
                choose++;
                for(int p = 0; p < k; p++) if(j >> p & 1) cnt[p]++;
            }
        }
        if(choose) {
            bool ok = 1;
            for(int j = 0; j < k; j++) ok &= (cnt[j] <= choose / 2);
            yes |= ok;
        }
    }
    puts(yes ? "YES" : "NO");
    return 0;
}
