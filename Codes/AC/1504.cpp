#include <bits/stdc++.h>
using namespace std;
typedef long long cc;
typedef pair <int, int> pii;
#define X first
#define Y second
const int N = 100005;
int n, S;
int a[N];
vector <pii> b;
int sl;
bool cmp(pii x, pii y) {
    return x.X + x.Y * sl < y.X + y.Y * sl;
}
cc check(int m) {
    sl = m;
    sort(b.begin(), b.end(), cmp);
    cc cur = 0;
    for (int i = 0; i < sl; i++) {
        pii v = b[i];
        cur += 1ll * v.X + 1ll * v.Y * sl;
    }
    return cur;
}
cc res;
int main() {
    //freopen("input.inp", "r", stdin);
    //freopen("output.out", "w", stdout);
    //freopen("COUPLE.inp", "r", stdin);
    //freopen("COUPLE.out", "w", stdout);
    ios_base  :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> S;
    for (int i = 1; i <= n; i++) cin >> a[i];
    b.clear();
    for (int i = 1; i <= n; i++) b.push_back(make_pair(a[i], i));
    int l = 0, h = n;
    while (l <= h) {
        int mid = (l + h) >> 1;
        cc cur = check(mid);
        //cout << mid << " "<< cur << "\n";
        if (cur <= S) {
            res = cur;
            l = mid + 1;
        } else
        h = mid - 1;
    }
    cout << l - 1 << " " << res << "\n";
    return 0;
}
