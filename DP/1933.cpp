#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> d(n);
    map<int, bool> e;
    int nd = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (!e[a[i]]) {
            e[a[i]] = true;
            nd++;
        }
        d[i] = nd;
    }
    for (int i = 0; i < m; i++) {
        int l;
        cin >> l;
        cout << d[l - 1] << endl;
    }
}
