#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    srand(time(NULL));

    int n, a, b;
    cin >> n >> a >> b; a--; b--;
    int k = 0;
    for (; a != b; k++) {
        a >>= 1; b >>= 1;
    }
    if ((1 << k) == n) { cout << "Final!\n"; return 0; }
    cout << k << '\n';

    return 0;
}
