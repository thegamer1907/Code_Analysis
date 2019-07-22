#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
    int n, m, k, a, ans = 0;
    cin >> n >> m >> k;
    vector<int> d;
    for(int i = 0; i < m; i++){
        cin >> a; a--;
        d.push_back(a);
    }
    if (d[0] / k == d[m - 1] / k){
        cout << 1;
        return 0;
    }
    int mn = 0, mnvr = 0;
    mnvr = 1;
    if (d[0] / k != d[1] / k){
        ans++;
        mn = 1;
    }
    int h = 1;
    while (h < m){
        while (((d[h-1] - mn) / k) == ((d[h] - mn) / k)){
            mnvr++;
            h++;
        }
        ans++;
        mn += mnvr;
    }
    cout << ans;
    return 0;
}