
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
    
    string pass;
    int n;
    cin >> pass >> n;
    vector<string> v(n);
    for(auto& s : v) cin >> s;
    bool ok = false;
    for(auto& s : v) ok |= s == pass;
    for(size_t i = 0; i < v.size(); ++i) {
        for(size_t j = 0; j < v.size(); ++j) {
            if(v[i][1] == pass[0] && v[j][0] == pass[1]) {
                ok = true;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
    return 0;
}
