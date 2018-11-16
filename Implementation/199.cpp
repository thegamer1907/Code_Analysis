#include <bits/stdc++.h>

using namespace std;

bool get_bit(int x, int i) {
    return x & (1 << i);
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    a--, b--;
    int k = log2(n);
    int ans = -1;
    for (int i = 0; i < k; i++) {
        if (get_bit(a, i) != get_bit(b, i)) {
            ans = i;
        }
    }
    ans++;
    if (ans == k) {
        cout << "Final!" << endl;
    }
    else {
        cout << ans << endl;
    }
    return 0;
}
