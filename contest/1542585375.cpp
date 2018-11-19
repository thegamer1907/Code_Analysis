#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define pb push_back
#define sz(a) (int)(a).size()
#define rep(i, a, b) for (int i = (a), _b = (b); i < _b; ++i)
#define frep(i, a, b) for (int i = (a), _b = (int)(b); i <= _b; ++i)

typedef complex<ld> cplex;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;

const int inf = 1000000007;
const int N = 1000000 + 7;
const int multipleTest = 0;

int cnt[1 << 4];
int n, k;

void solve() {
    cin >> n >> k;
    rep(i, 0, n) {
        int mask = 0;
        rep(j, 0, k) {
            int u; scanf("%d", &u);
            mask |= u << j;
        }
        cnt[mask]++;
    }
    if (cnt[0]) {
        puts("YES");
    } else {
        rep(mask, 0, 1 << k) rep(mm, 0, 1 << k) if (cnt[mask] && cnt[mm]) {
            if ((mask & mm) == 0) {
                puts("YES");
                return;
            }
        }
        rep(j, 0, k) if (cnt[1 << j]) {
            puts("NO");
            return;
        }
        if (k <= 3) {
            puts("NO");
        } else {
            if (cnt[12] && cnt[6] && cnt[3] && cnt[9]) {
                puts("YES");
            } else puts("NO");
        }
    }
}

int main() {
#ifdef _LOCAL_
    freopen("in.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);
#endif
    int Test = 1;
    if (multipleTest) {
        cin >> Test;
    }
    for(int i = 0; i < Test; ++i) {
        solve();
    }
#ifdef _LOCAL_
    cout<<"\n" << 1.0 * clock() / CLOCKS_PER_SEC <<endl;
#endif
}
