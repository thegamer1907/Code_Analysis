#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifdef DEBUG
    freopen("input.txt", "r", stdin);
    #endif
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool b = false;
    bool b1 = false;
    for (int i = 0; i < n; i++){
        string s1;
        cin >> s1;
        if (s1 == s){
            cout << "YES\n";
            return 0;
        }
        b |= s1[0] == s[1];
        b1 |= s1[1] == s[0];
        if (s1[0] == s[1] && b1){
            cout << "YES\n";
            return 0;
        }
        if (s1[1] == s[0] && b){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
