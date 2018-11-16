#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(int, char**) {
    int n, m, x;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    set<int> ss;
    for (int i = n - 1; i >= 0; --i) {
        ss.insert(v[i]);
        v[i] = ss.size();
    }
    for (int i = 0; i < m; ++i) {
        cin >> x;
        cout << v[x-1] << endl;
    }
    return 0;
}