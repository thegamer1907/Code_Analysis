#include <bits/stdc++.h>
#define optimize_io ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int
using namespace std;


int main() {
    optimize_io
    int n, m, maxx, minn;
    cin >> n;
    cin >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    maxx = *max_element(a, a + n) + m;
    for (int i = 0; i < m; i++) {
        a[distance(a, min_element(a, a + n))] += 1;
    }
    minn = *max_element(a, a + n);
    cout << minn << " " << maxx << endl;
    return 0;
}
