#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e4 + 5;
int par[MAXN];
int sz[MAXN];
int N;
int num;

int fd(int cur) {
    if (par[cur] != cur)
        return fd(par[cur]);
    return par[cur];
}

void mg(int a, int b) {
    int ar = fd(a), br = fd(b);
    if (ar == br)
        return;
    --num;
    if (sz[ar] > sz[br]) {
        sz[ar] += sz[br];
        par[br] = ar;
    }
    else {
        sz[br] += sz[ar];
        par[ar] = br;
    }
}

int main() {
    cin >> N;
    num = N;
    for (int i = 1; i <= N; ++i) {
        par[i] = i;
        sz[i] = 1;
    }
    for (int i = 1; i <= N; ++i) {
        int x; cin >> x;
        mg(i, x);
    }
    cout << num;
}