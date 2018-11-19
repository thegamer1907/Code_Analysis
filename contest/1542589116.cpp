#include <bits/stdc++.h>
using namespace std;

int main(){

    string s, t, as = "NO";
    vector <string> a;
    int tt, i, n, c1, c2;

    cin >> s >> n;
    for(i = 1, c1 = 0, c2 = 0; i <= n; i++){
        cin >> t;
        if(s == t){
            as = "YES";
        }
        if(c1 == 0 && t[0] == s[1]){
            c1 = 1;
        }
        if(c2 == 0 && t[1] == s[0]){
            c2 = 1;
        }
    }
    if(c1 + c2 == 2){
        as = "YES";
    }

    cout << as << endl;

    return 0;
}
