#include <bits/stdc++.h>
using namespace std;

const int maxn = 101;
int a[maxn], b[maxn];

int main() {
    int n, m;
    cin >> n;
    for (int i = 0, x; i < n; i++)  cin >> x, a[x]++;
    cin >> m;
    for (int i = 0, x; i < m; i++) cin >> x, b[x]++;
    int answ = 0;
    for (int i = 1; i < maxn; i++) {
        if(a[i - 1]) {
            answ += min(b[i], a[i - 1]);
            b[i] -= min(b[i], a[i - 1]);
        }
        else {
            answ += min(a[i], b[i - 1]);
            a[i] -= min(a[i], b[i - 1]);
        }
        int t = min(a[i], b[i]);
        answ += t;
        a[i] -= t;
        b[i] -= t;
    }
    cout << answ;
}