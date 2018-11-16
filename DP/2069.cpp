#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    stack<int> s;
    while (n--) {
        int a;
        cin >> a;
        s.push(a);
    }
    vector<int> ans(s.size());
    unordered_set<int> e;
    int k = 0;
    while (!s.empty()) {
        if (e.find(s.top()) == e.end()) {
            e.insert(s.top());
            ++k;
        }
        s.pop();
        ans[s.size()] = k;
    }
    while (m--) {
        int a;
        cin >> a;
        cout << ans[--a] << endl;
    }
    return 0;
}