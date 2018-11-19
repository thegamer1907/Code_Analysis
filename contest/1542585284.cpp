#include <bits/stdc++.h>
#define loop(i, a, n) for (int i = a; i < int(n); ++i)
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n, k; cin >> n >> k;
    vector<bool> can((1<<k), false);
    while (n--){
        int res = 0, temp;
        loop(i, 0, k) cin >> temp, res = 2 * res + temp;
        can[res] = true;
    }

    bool ans = false;
    loop(i, 0, can.size()) loop(j, 0, can.size()) if (can[i] && can[j]){
        if ((i & j) == 0){
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}

