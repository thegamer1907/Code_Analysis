#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, a[N], mn = 1e9;
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    if(mn >= n) {
        mn = mn / n * n;
        for(int i = 1; i <= n; i++) a[i] -= mn;
    }
    int c = 0;
    for(int i = 1; i <= n; i++) {
        // a[i] -= c;
        if(a[i] - c <= 0) {
            cout << i;
            return 0;
        }
        // a[i]--;
        c++;
        if(i == n) i = 0;
    }
    return 0;
}