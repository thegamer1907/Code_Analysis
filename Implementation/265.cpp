#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = (int) 1e9;

int main() {
    #ifdef MY
        freopen("in.txt", "r", stdin);
    #else
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
    #endif // MY
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        h[i] = i + 1;
    }
    for (int k = 1; h.size() > 2; ++k) {
        vector<int> nh;
        for (int i = 0; i < n; i += 2) {
            if (h[i] == a && h[i + 1] == b) {
                cout << k << "\n";
                return 0;
            }
            if (h[i + 1] == a || h[i + 1] == b) {
                nh.push_back(h[i + 1]);
            } else {
                nh.push_back(h[i]);
            }
        }
        n /= 2;
        h = nh;
    }
    cout << "Final!\n";
    return 0;
}
