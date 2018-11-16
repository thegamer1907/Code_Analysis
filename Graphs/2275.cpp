#include <bits/stdc++.h>

using namespace std;

#define pb push_back

vector<int> ch[2005];
int maxd;

void dfs(int a,int d) {
    if (d>maxd) maxd = d;
    d++;
    for (auto c:ch[a]) dfs(c,d);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> k;
        if (k<0) k++;
        ch[k].pb(i);
    }
    dfs(0,0);
    cout << maxd;
}
