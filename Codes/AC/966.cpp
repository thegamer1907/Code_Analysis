#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int n, k, sa[maxn], sb[maxn], l, r, m;
string s;

bool check(int x) {
    for (int i = 1; i <= n - x + 1; i ++) {
        if (sa[i+x-1] - sa[i-1] <= k || sb[i+x-1] - sb[i-1] <= k)
            return true;
    }
    return false;
}

int main() {
    cin >> n >> k >>s;
    s = "." + s;
    for (int i = 1; i <= n; i ++) {
        sa[i] = sa[i-1] + (s[i] == 'a');
        sb[i] = sb[i-1] + (s[i] == 'b');
    }
    l = 1, r = n;
    while (l <= r) {
        m = (l + r) >> 1;
        if (check(m))
            l = m + 1;
        else
            r = m - 1;
    }
    cout << l -1 << endl;
    return 0;
}
