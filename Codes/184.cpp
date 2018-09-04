#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define ever (;;)
#define ALL(s) s.begin(),s.end()

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (i == 0) v[i] = x;
        else v[i] = v[i - 1] + x;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        int indx = lower_bound(ALL(v), x) - v.begin();
        cout << indx + 1 << '\n';
    }
}
