#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int last = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        last = last+a;
        v.push_back(last);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        cout << lower_bound(v.begin(), v.end(), q)-v.begin()+1 << "\n";
    }
}
