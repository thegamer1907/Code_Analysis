#include<bits/stdc++.h>
using namespace std;



int main() {
    //freopen("input.txt", "r", stdin);
    string st;
    cin >> st;
    int n;
    cin >> n;
    set<char> f;
    set<char> s;
    for (int i = 1; i <= n; ++i) {
        string s1;
        cin >> s1;
        if (s1 == st) {
            cout << "YES";
            return 0;
        }
        f.insert(s1[1]);
        s.insert(s1[0]);
    }
    //cout << f.size();
    if (f.find(st[0]) != f.end() && s.find(st[1]) != s.end())
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
