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
    long long del = 0;
    long long op = 0;
    for(int i = 0; i < m; i++) {
        op++;
        long long cur = p[i] - del;
        long long nd = del;
        while(i < m && (p[i] - del) / k == cur / k) {
            nd++;
            i++;
        }
        i--;
        del = nd;
    }
    cout << op;
    return 0;
}