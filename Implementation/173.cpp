#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    for (int i = 1; 1 << i <= n; i++) {
        if ((a - 1) / (1 << i) == (b - 1) / (1 << i)) {
            if (1 << i == n) cout << "Final!"; else cout << i;
            return 0;
        }
    }
    return 0;
}
