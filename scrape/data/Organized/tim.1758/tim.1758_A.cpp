#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
    int n, m, k, ans = 1, mn = 0, mnvr = 0;
    cin >> n >> m >> k;
    vector<int> d(m);
    cin >> d[0]; d[0]--;
    for(int i = 1; i < m; i++){
        cin >> d[i]; d[i]--;
        mnvr++;
        if (((d[i-1] - mn) / k) != ((d[i] - mn) / k)){
            ans++;
            mn += mnvr;
            mnvr = 0;
        }
    }
    cout << ans;
    return 0;
}