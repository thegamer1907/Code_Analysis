# include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,mp;
    cin >> n;
    vector<int> e(n);
    for (int i=0;i<n;i++) cin >> e[i];
    for (int i=0;i<n;i++) e[i] = max(e[i]-i+n-1,0)/n;
    m = e[0]; mp = 0;
    for (int i=1;i<n;i++) {
        if (e[i]<m) {
            m = e[i];
            mp = i;
        }
    }
    cout << mp+1;
}
