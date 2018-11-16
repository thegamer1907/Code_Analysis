#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0, fkit, n; cin >> n;
    vector<int>v(n);
    for(int i=0 ; i < n ; i++){cin >> v[i]; ans += v[i], fkit = ans;}
    for(int i=0 ; i < n ; i++){
        if(!v[i])
            for(int k=1 ; k <= n ; k++){
                vector<int> tmp(v); int meh = 0;
                for(int j=i ; j < min(n, i+k) ; j++)
                    tmp[j] = !tmp[j];
                for(int j=0 ; j < n ; j++)
                    meh += tmp[j];
                ans = max(ans, meh);
            }
    }
    cout << ans - (ans == fkit);
}
