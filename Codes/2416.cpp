#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <fstream>
#define ni(n) scanf("%d", &n)
#define nl(n) scanf("%I64d", &n)
#define case(t) printf("Case #%d: ", (t))
#define pii pair<int, int>
#define vii vector<pii>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long ll;
const double pi = acos(-1);
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int MAXN = 1e7 + 5;
const double eps = 1e-9;
using namespace std;
int a[MAXN], vis[MAXN];
ll cnt[MAXN];

int main()
{
    memset(vis, 0, sizeof vis);
    for (int i = 2; i < MAXN; i++)
    {
        if (vis[i]) continue;
        for (int j = i + i; j < MAXN; j += i) vis[j] = i;
    }
    int n;
    ni(n);
    for (int i = 0; i < n; i++)
    {
        ni(a[i]);
        int cur = vis[a[i]], pre = -1;
        while (a[i] > 1 && cur > 1)
        {
            if (cur != pre) cnt[cur]++;
            a[i] /= cur;
            pre = cur;
            cur = vis[a[i]];
        }
        if (cur == 0 && a[i] != pre) cnt[a[i]]++;
    }
    for (int i = 2; i < MAXN; i++) cnt[i] = (ll) cnt[i - 1] + (ll) cnt[i];
    int m;
    ni(m);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        ni(l), ni(r);
        l = min(l, MAXN - 1);
        r = min(r, MAXN - 1);
        printf("%d\n", cnt[r] - cnt[l - 1]);
    }
    return 0;
}
