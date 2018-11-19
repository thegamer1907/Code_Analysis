#include <bits/stdc++.h>
using namespace std;

string s, t;
bool ok, ok1, ok2;
int n;

int main() {
//    freopen("../Data/Input1.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    cin >> s >> n;
    for(int i = 1; i <= n; i++) {
        cin >> t;
        if(t == s) {
            ok = true;
        }
        if(t[0] == s[1]) {
            ok1 = true;
        }
        if(t[1] == s[0]) {
            ok2 = true;
        }
    }
    if(ok) {
        cout << "YES" <<endl;
        return 0;
    }
    if(ok1 && ok2) {
        cout << "YES" <<endl;
        return 0;
    }
    cout <<"NO" <<endl;
    return 0;
}
