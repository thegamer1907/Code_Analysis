#include <bits/stdc++.h>
using namespace std;
vector<int> a, b, c;
void inc(vector<int> &aa, int bb) {
    for (int i = 0; i < 4; i++) if (bb & 1 << i) aa[i]++;
}
int main() {
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0; j < m; j++) {
            int tt; scanf("%d", &tt);
            t *= 2; t += tt;
        }
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    a.resize(unique(a.begin(), a.end()) - a.begin());
    //for (int i : a) cout << i << endl;
    int t = 1 << a.size();
    for (int i = 1; i < t; i++) {
        b.clear();
        int tt = 0;
        for (int j = 0; j < a.size(); j++) if (i & 1 << j) b.push_back(j);
        c.clear();
        for (int j = 0; j < m; j++) c.push_back(0);
        for (int j : b) inc(c, a[j]);
        if (*max_element(c.begin(), c.end()) <= b.size() / 2) {
            //for (int j : b) cout << j << ' '; cout << endl;
            puts("YES");
            exit(0);
        }
    }
    puts("NO");
    return 0;
}
