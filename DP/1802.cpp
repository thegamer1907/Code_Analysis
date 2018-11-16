#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll maxn = 123456;

    bool a[maxn][2];
    
main() {
    ios_base:: sync_with_stdio(false);
    string s;
    cin >> s;
    bool answ = false;
    ll n = s.length();
    for (ll i = 1; i < n; i++) {
        if(s[i] == 'A' && s[i - 1] == 'B') {
            if(i - 2 >= 0 && a[i - 2][1]) answ = true;
            else {
                a[i][0] = true;
                a[i][1] = a[i - 1][1];
            }
        }
        else if(s[i] == 'B' && s[i - 1] == 'A') {
            if(i - 2 >= 0 && a[i - 2][0]) answ = true;
            else { 
                a[i][0] = a[i - 1][0];
                a[i][1] = true;
            }
        }
        else a[i][0] = a[i - 1][0]| a[i - 2][0], a[i][1] = a[i - 1][1]| a[i - 2][1];
    }
    if(answ) cout << "YES";
    else cout << "NO";
}