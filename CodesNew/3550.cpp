#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define debug cout << "DEBUG" << "\n";
#define DEBUG(a) cout << "DEBUG: " << a << "\n";
#define eb emplace_back

const int N = 1000;
int n, arr[N], eminn = (int)1e9, emaxx = 0, m;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >>  n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        eminn = min(eminn, arr[i]);
        emaxx = max(emaxx, arr[i]);
    }
    int Q = 0;
    for (int i = 0; i < n; ++i) {
        Q += emaxx - arr[i];
    }
    if (Q >= m) {
        cout << emaxx << " " << emaxx + m;
    }
    else {
        cout << emaxx + ((m - Q - 1) / n) + 1 << " " << emaxx + m;
    }


};