#include "bits/stdc++.h"
using namespace std;

vector< vector<int> > in;
vector< vector<int> > up;

int main() {
    int n, m; scanf("%d %d", &n, &m);
    in.resize(n, vector<int>(m));
    up.resize(n + 1, vector<int> (m + 1));
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) scanf("%d", &in[i][j]);

    for(int j = 0; j < m; ++j) up[n - 1][j] = 1;
    for(int i = n - 2; i >= 0; i--) for(int j = 0; j < m; ++j) {
        if(in[i][j] <= in[i + 1][j]) up[i][j] = up[i + 1][j] + 1;
        else up[i][j] = 1;
    }
    vector<int> best(n);
    for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) best[i] = max(best[i], up[i][j]);
    int q; scanf("%d", &q);
    while(q--) {
        int l, r; scanf("%d %d", &l, &r);
        --l, --r;
        if(l + best[l] > r) puts("Yes");
        else puts("No");
    }
}