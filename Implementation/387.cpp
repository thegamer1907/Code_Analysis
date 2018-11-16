#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k,x;
    while(cin >> n >> k) {
        int ans = 0;
        int vis[20000];
        memset(vis,0,sizeof(vis));
        int x;
set<int,greater<int> >s;
        for(int i = 1; i <= n; i++) {
            cin >> x;
            if(x == 0) continue;
            vis[x]++;
            s.insert(x);
        } 
        int cnt = 0;
        for(auto const v:s) {
            if(cnt >= k) {
                break;
            }

            cnt += vis[v];
            ans += vis[v]; 
        }
        cout << ans << endl;
    }
    return 0;

}
