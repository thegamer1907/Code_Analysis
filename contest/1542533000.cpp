#include <bits/stdc++.h>

#define fto(i, x, y) for(int i = (x); i <= (y); ++i)
#define fdto(i, x, y) for(int i = (x); i >= (y); --i)
#define ftoa(i, x, y, a) for(int i = (x); i <= (y); i += a)
#define ftoit(it, var) for (__typeof(var.begin()) it = var.begin(); it != var.end(); ++it)

#define ii pair<ll, ll>
#define mp make_pair
#define FF first
#define SS second

#define vi vector<int>
#define vii vector<ii>
#define ll long long
#define vll vector<ll>

#define eb emplace_back
#define ef emplace_front
#define lb lower_bound
#define ub upper_bound

#define oo 1000000007
#define OO 1000000000000000007LL

using namespace std;

#define Pro "tmp"
#define maxN 200007

int a[maxN];
ll f[27][maxN];

ll ans = 0LL;
int curL, curR;

int cnt[maxN];

void clr(int i) {
    ans -= ((ll)cnt[a[i]]*(cnt[a[i]]-1))/2LL;
    --cnt[a[i]];

    ans += ((ll)cnt[a[i]]*(cnt[a[i]]-1))/2LL;
    return;
}

void add(int i) {
    ans -= ((ll)cnt[a[i]]*(cnt[a[i]]-1))/2LL;
    ++cnt[a[i]];

    ans += ((ll)cnt[a[i]]*(cnt[a[i]]-1))/2LL;
    return;
}

ll cost(int left, int right) {
    while (curL < left) clr(curL++);
    while (curL > left) add(--curL);

    while (curR > right) clr(curR--);
    while (curR < right) add(++curR);

    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen(Pro".inp", "r", stdin);
        freopen(Pro".out", "w", stdout);
    #endif // ONLINE_JUDGE

    int n, k;
    scanf("%d%d", &n, &k);

    fto (i, 1, n) scanf("%d", &a[i]);
    fto (i, 0, k) {
        fto (j, 0, n) f[i][j] = OO;
    }
    f[0][0] = 0LL;

    fto (layer, 1, k) {
        queue <tuple <int, int, int, int> > q;
        q.emplace(make_tuple(1, n, 1, n));

        curL = n+1; curR = n;
        ans = 0LL;

        fto (i, 1, n) cnt[a[i]] = 0;
        while (!q.empty()) {
            int left, right, x_min, x_max; tie(left, right, x_min, x_max) = q.front();
            q.pop();

            int mid = (left+right)/2;
            int best = 0;

            fto (x, x_min, min(x_max, mid)) {
                if (f[layer][mid] > f[layer-1][x-1]+cost(x, mid)) {
                    f[layer][mid] = f[layer-1][x-1]+cost(x, mid);
                    best = x;
                }
            }

            if (left == right) continue;

            q.emplace(make_tuple(left, mid, x_min, best));
            q.emplace(make_tuple(mid+1, right, best, x_max));
        }
    }

    printf("%lld\n", f[k][n]);
    return 0;
}

