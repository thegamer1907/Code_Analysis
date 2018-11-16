#include "bits/stdc++.h"
using namespace std;

const int N = 10005;
vector< int> conn[N];

int c[N], seen[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; ++i) {
        int p; 
        scanf("%d", &p);
        conn[i].emplace_back(p);
        conn[p].emplace_back(i);
    }

    for(int i = 1; i <= n; ++i) {
        scanf("%d", &c[i]);
    }

    int res = 1;
    vector< int> Vu{1};
    for(int i = 0; i < Vu.size(); ++i) {
        seen[Vu[i]] = true;
        int cl = c[Vu[i]];
        for(int k: conn[Vu[i]]) {
            if(seen[k]) continue;
            if(c[k] != cl) res++;
            Vu.emplace_back(k);
        }
    }
    printf("%d\n", res);
}