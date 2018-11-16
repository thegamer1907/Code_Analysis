#include <bits/stdc++.h>
//#pragma GCC optimize("O3") /*THIS*/
//#pragma GCC optimize("03")

using namespace std;

int main() {
    #ifdef MY
        //freopen("input.txt", "r", stdin);
    #endif // MY
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    vector <int> x;
    for (int i = 1; i <= n; ++i) {
        x.push_back(i);
    }
    int r = 1;
    while (true) {
        vector <int> x1;
        for (int i = 0; i + 1 < int(x.size()); i += 2) {
            if (x[i] == a && x[i + 1] == b) {
                if ((1 << r) == n) {
                    cout << "Final!";
                    return 0;
                }
                cout << r;
                return 0;
            }
            if (x[i] == a || x[i] == b) {
                x1.push_back(x[i]);
                continue;
            }
            if (x[i + 1] == a || x[i + 1] == b) {
                x1.push_back(x[i + 1]);
                continue;
            }
            x1.push_back(x[i]);
        }
        sort(x1.begin(), x1.end());
        x = x1;
        r++;
    }
    return 0;
}
