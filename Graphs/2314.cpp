#include <bits/stdc++.h>
using namespace std;

#define boost ios::sync_with_stdio(false)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define mp make_pair
#define f first
#define se second
#define pb push_back
#define ppb pop_back
#define ll long long
#define ull unsigned long long
#define cntbit(x) __builtin_popcount(x)
#define uset unordered_set
#define endl '\n'
#define umap unordered_map

const int N = 2123;
int n, ans = 0;
vector <int> g[N], start;
bool used[N];

void dfs(int v, int h) {
    used[v] = true;
    ans = max(ans, h);
    for(auto i : g[v])
        if(!used[i])
            dfs(i, h+1);
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        int v; cin >> v;
        if(v == -1)
            start.pb(i);
        else
            g[v].pb(i);
    }
    for(auto i : start)
        if(!used[i])
            dfs(i, 1);
    cout << ans;
    return 0;
}