#include <stack>
#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n, m; cin >> n >> m;
    int cat[n]; for (int i = 0; i < n; i++) cin >> cat[i];
    vector<int> adj[n];
    for (int i = 0; i < n-1; i++) {
        int x, y; cin >> x >> y; x--; y--;
        adj[x].push_back(y); adj[y].push_back(x);
    }
    int cnt[n];
    fill(cnt, cnt+n, -1);
    stack<int> st;
    cnt[0] = cat[0];
    st.push(0);
    int ans = 0;
    while (!st.empty()) {
        int i = st.top(); st.pop();
        bool leaf = true;
        for (int j : adj[i]) {
            if (cnt[j] >= 0) continue;
            leaf = false;
            cnt[j] = (cat[j] ? cnt[i] + 1 : 0);
            if (cnt[j] <= m) st.push(j);
        }
        if (leaf && 0 <= cnt[i] && cnt[i] <= m) ans++;
    }
    cout << ans << endl;
}
