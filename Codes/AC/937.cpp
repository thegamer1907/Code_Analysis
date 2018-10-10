#include <bits/stdc++.h>

using namespace std;
using matrix = vector<vector<long long>>;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define all(x) (x).begin(), (x).end()
//#define int ll

const int MAXN = 1e5 + 100;
int cnt[2][MAXN];

signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, k;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n; ++i) {
        cnt[s[i] - 'a'][i]++;
        if (i > 0) {
            cnt[0][i] += cnt[0][i - 1];
            cnt[1][i] += cnt[1][i - 1];
        }
    }
    int l = 0, r = 0, ans = 0;
    while (l < n) {
        while (r < n) {
            int sum[2];
            sum[0] = cnt[0][r] - (l == 0 ? 0 : cnt[0][l - 1]);
            sum[1] = cnt[1][r] - (l == 0 ? 0 : cnt[1][l - 1]);
            if (sum[0] > k && sum[1] > k) {
                break;
            }
            r++;
        }
        ans = max(ans, r - l);
        l++;
    }
    cout << ans;
}
