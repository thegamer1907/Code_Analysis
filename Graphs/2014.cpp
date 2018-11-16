#include "bits/stdc++.h"
using namespace std;

const int N = 1e5 + 5;
int in[N], size[N];
vector< int> conn[N];
int n, m, res;


void dfs(int a, int p, int k) {
    size[a] = 1;
    if(k > m) return;

    for(int b: conn[a]) if(p != b) {
        if(in[b] == 1) dfs(b, a, k + 1);
        else dfs(b, a, 0);
        size[a] += size[b];
    }

    if(size[a] == 1) res++;
}

int main() {
    scanf("%d %d", &n, &m);
    
    for(int i = 1; i <= n; ++i) scanf("%d", in + i);

    for(int i = 0; i < n - 1; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        conn[a].emplace_back(b);
        conn[b].emplace_back(a);
    }

    dfs(1, 1, (in[1] == 1));
    cout << res << endl;
}