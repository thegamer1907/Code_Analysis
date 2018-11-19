#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin >> s;
    int n; bool f1 = 0, f2 = 0;
    cin >> n;
    while(n--){
        string t; cin >> t;
        if(t[0] == s[1]) f1 = 1;
        if(t[1] == s[0]) f2 = 1;
        if(t == s) return cout << "YES", 0;
    }
    (f1 && f2)? cout << "YES": cout << "NO";
}
