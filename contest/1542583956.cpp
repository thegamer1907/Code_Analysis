#include <bits/stdc++.h>
using namespace std;
int a[3];
int main() {
    int n, m;
    cin >> a[0] >> a[1] >> a[2] >> n >> m;
    a[0] %= 12; n %= 12; m %= 12;
    a[0] *= 5; n *= 5; m *= 5;
    /*sort(a, a + 3);
    pair<int, int> b;
    if (a[0] >= m) b.first = a[0];
    else if (a[1] >= m) b.first = a[1];
    else if (a[2] >= m) b.first = a[2];
    else b.first = a[0];
    if (a[2] <= m) b.second = a[2];
    else if (a[1] <= m) b.second = a[1];
    else if (a[0] <= m) b.second = a[0];
    else b.second = a[2];
    //cout << b.first << ' ' << b.second << endl;
    if (b.first > b.second && n >= b.second && n <= b.first) puts("YES");
    else if (b.first < b.second && (n >= b.second || n <= b.first)) puts("YES");
    else if (b.first == b.second) puts("YES");
    else puts("NO");*/
    while (true) {
        if (n == a[0] || n == a[1] || n == a[2]) break;
        n++; n %= 60;
    }
    while (true) {
        if (m == a[0] || m == a[1] || m == a[2]) break;
        m++; m %= 60;
    }
    puts(n == m ? "YES" : "NO");
    return 0;
}
