
//  Created by TaoSama.
//  Copyright (c) 2017 TaoSama. All rights reserved.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, INF = 0x3f3f3f3f, MOD = 1e9 + 7;


int main(){
#ifdef LOCAL
    freopen("/Users/didi/ACM/in.txt", "r", stdin);
//  freopen("/Users/didi/ACM/out.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n, k; 
    while(cin >> n >> k) {
        vector<int> cnt(1 << k);
        for(int i = 0; i < n; ++i) {
            int x = 0;
            for(int j = 0; j < k; ++j) {
                int y; cin >> y;
                x |= y << j;
            }
            ++cnt[x];
        }

        bool ok = cnt[0];
        for(int i = 0; i < 1 << k; ++i) {
            if(!cnt[i]) continue;
            int j = i ^ ((1 << k) - 1);
            for(int s0 = j; s0; s0 = (s0 - 1) & j) {
                ok |= cnt[s0];
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
