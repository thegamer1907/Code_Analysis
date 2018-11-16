#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 300;
int lst[10][N];

int main() {
#ifdef MY
    freopen("f.in", "r", stdin);
#endif // MY
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    int t = 1;
    for (int i = 0; i < n; ++i) {
        lst[t][i] = i + 1;
    }
    while (n > 2) {
        for (int i = 0; i < n; i += 2) {
            if (lst[t][i] == a && lst[t][i + 1] == b) {
                cout << t;
                return 0;
            }
            if (lst[t][i + 1] == a || lst[t][i + 1] == b) {
                lst[t + 1][i / 2] = lst[t][i + 1];
            } else {
                lst[t + 1][i / 2] = lst[t][i];
            }
        }
        t++;
        n /= 2;
    }
    cout << "Final!";
    return 0;
}
