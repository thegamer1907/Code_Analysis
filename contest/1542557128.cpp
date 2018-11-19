#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s; cin >> s;
    int n; cin >> n;
    vector<int> i1, i2;
    bool ok = false;
    for(int i = 0 ; i < n ; i++) {
        string t; cin >> t;
        if(t == s) ok = true;
        if(t[0] == s[1]) i2.push_back(i);
        if(t[1] == s[0]) i1.push_back(i);
    }
    if(ok) {
        cout << "YES";
        return 0;
    }
    if(i1.size() == 0 or i2.size() == 0) {
        cout << "NO";
    } else if(i1.size() == 1 && i2.size() == 1) {
        cout << "YES";
    } else {
        cout << "YES";
    }
}