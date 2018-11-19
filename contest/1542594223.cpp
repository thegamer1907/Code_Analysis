#include <bits/stdc++.h>
using namespace std;

string s, p;
int n, pref = 0, suf = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin >> s >> n;
    for(int i=0; i < n; i++) {
        cin >> p;
        if(p == s) {
            cout << "YES";
            return 0;
        }
        if(p[1] == s[0])
            pref = 1;
        if(p[0] == s[1])
            suf = 1;
    }
    if(pref && suf)
        cout << "YES";
    else
        cout << "NO";
}
