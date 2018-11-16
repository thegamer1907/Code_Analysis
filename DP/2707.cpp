#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000 * 100 + 10;
int n;
int h[maxn];
int x[maxn];
bool mark[maxn];

int main () {
    cin >> n;
    int ans = min(2, n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> h[i];
    }
    
    for (int i = 1; i < n-1; i++) {
        if (!mark[i-1]) {
            if (x[i-1] < x[i] - h[i]) {
                ans ++;
            } else if (x[i] + h[i] < x[i+1]) {
                ans ++;
                mark[i] = true;
            }
        } else {
            if (x[i-1] + h[i-1] < x[i] - h[i]) {
                ans ++;
            } else if (x[i] + h[i] < x[i+1]) {
                ans ++;
                mark[i] = true;
            }
        }
    }
    cout << ans << endl;
    return 0;
}