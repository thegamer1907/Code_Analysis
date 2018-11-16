#include<bits/stdc++.h>
using namespace std;

#define N 105
int n, m, re;
int b[N], g[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }
    sort(b, b+n);
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> g[i];
    }
    sort(g, g+m);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (abs(b[i] - g[j]) <= 1) {
                g[j] = N;
                re++;
                break;
            }
        }
    }
    cout << re;
    return 0;
}
