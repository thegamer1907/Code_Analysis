#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll N = 1e3 + 10, mod = 1e9 + 7;
vector <ll> b, g;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a, c, t, k = 0, ans = 0;
    cin >> a;
    for (int i = 0; i < a; i ++){
        cin >> c;
        b.push_back(c);
    }
    cin >> t;
    for (int i = 0; i < t; i ++){
        cin >> c;
        g.push_back(c);
    }
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    for (int i = 0; i < b.size(); i ++){
        if (k < g.size() && abs(b[i] - g[k]) <= 1){
            //cout << i << " " << k << "\n";
            ans ++;
            k ++;
        }
        else if (k < g.size() && b[i] > g[k]){
            k ++;
            i --;
        }
    }
    cout << ans;
    return 0;
}
