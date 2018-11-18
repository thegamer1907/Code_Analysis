#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e5 + 5;
const int K = 25;

class Data {
public:
    int l, r, optL, optR;

    Data (int l, int r, int optL, int optR) {
        this->l = l;
        this->r = r;
        this->optL = optL;
        this->optR = optR;
    }
};

int dp[N][K], a[N], n, k, cnt[N];
int L = 0;
int R = 0;
int cur = 0;

int calc (int x) {
    return x * (x - 1) / 2;
}

void add (int pos) {
    cur += cnt[a[pos]];
    cnt[a[pos]]++;
}

void sub (int pos) {
    cur -= cnt[a[pos]] - 1;
    cnt[a[pos]]--;
}

int cost (int l, int r) {
    if (l > r) return 0;
    while (R < r) add(++R);
    while (L > l) add(--L);
    while (R > r) sub(R--);
    while (L < l) sub(L++);

    return cur;
}

void input(){
    scanf("%lld %lld", &n, &k);
    a[0] = 0;
    for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    memset(cnt, 0, sizeof(cnt));
}

void constructLayer (int layer) {
    queue <Data> q;
    q.push(Data(1, n, 1, n));

    while (!q.empty()) {
        int l = q.front().l;
        int r = q.front().r;
        int optL = q.front().optL;
        int optR = q.front().optR;
        q.pop();

        if (l > r) continue;
        int mid = (l + r) / 2;
        int optPos = 0;

        for (int i = optL; i <= min(mid, optR); i++) {
            int nxt = dp[i][layer - 1] + cost(i + 1, mid);
            if (dp[mid][layer] > nxt) {
                dp[mid][layer] = nxt;
                optPos = i;
            }
        }

        q.push(Data(l, mid - 1, optL, optPos));
        q.push(Data(mid + 1, r, optPos, optR));
    }
}

void solve(){
    memset(dp, 0x3f, sizeof(dp));
    cnt[0] = 1;
    for (int i = 1; i <= n; i++) dp[i][1] = cost(1, i);
    for (int i = 2; i <= k; i++) constructLayer(i);

    printf("%lld", dp[n][k]);
}

signed main(){
    input();
    solve();
    return 0;
}
