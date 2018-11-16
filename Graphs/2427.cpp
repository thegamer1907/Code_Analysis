#include <bits/stdc++.h>

#define foi(i,k,n) for(int i = (int)k; i < (int)n; ++i)
using namespace std;

const int MAXN = 5 + 2000;
int p[MAXN];

int go(int u) {
    if(u == -1) return 0;
    return 1 + go(p[u]);
}

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n,ans = 0;
    cin >> n;
    foi(i,0,n) {
        cin >> p[i];
        if(~p[i])
            --p[i];
    }
    foi(i,0,n)
        ans = max(ans, go(i));
    cout << ans;
    return 0;
}
