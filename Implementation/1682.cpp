#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef long double ld;

void solve () {
    string s;
    cin >> s;
    ll c1 = 0, c0 = 0;

    for (auto i : s) {
        if (i == '1') {
            c1++;
            c0 = 0;
        }
        else {
            c0++;
            c1 = 0;
        }
        if (c1 == 7 || c0 == 7) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
    
}

int main () {
    ios_base :: sync_with_stdio (false); 
    cin.tie (NULL);
    //ll t;
    //cin >> t;
    //while (t--){
        solve ();
    //}
    return 0;
}