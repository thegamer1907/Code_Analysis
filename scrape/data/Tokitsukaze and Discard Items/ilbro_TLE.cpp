#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> p(m);
    for(int i = 0; i < m; i++) {
        cin >> p[i];
        p[i]--;
    }
    reverse(p.begin(), p.end());
    int del = 0;
    int op = 0;
    while(!p.empty()) {
        op++;
        int cur = p.back() - del;
        int nd = del;
        while((p.back() - del) / k == cur / k) {
            nd++;
            p.pop_back();
        }
        del = nd;
    }
    cout << op;
    return 0;
}