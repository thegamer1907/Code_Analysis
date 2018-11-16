#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    string s;
    cin >> s;
    if (s.find("AB") != string::npos && s.find("BA") != string::npos) {
        string t = s;
        unsigned long ind = t.find("AB");
        t[ind] = '*', t[ind + 1] = '*';
        if (t.find("BA") != string::npos) {
            cout << "YES" << endl;
            return 0;
        }
        t = s;
        ind = t.find("BA");
        t[ind] = '*', t[ind + 1] = '*';
        if (t.find("AB") != string::npos) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else cout << "NO" << endl;
}