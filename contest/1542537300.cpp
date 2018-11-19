#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ok[15];

int main()
{
    //freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = 0; j < k; j++) {
            int x; cin >> x;
            tmp = tmp * 2 + x;
        }
        ok[tmp] = true;
    }

    for (int i = 0; i < (1<<k); i++) {
        for (int j = 0; j < (1<<k); j++) {
            if (ok[i] && ok[j]) {
                if ((i&j) == 0) {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";
}
