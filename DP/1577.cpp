#include<bits/stdc++.h>
using namespace std;

string s;

bool check(string s1, string s2) {
    auto it = s.find(s1);
    if (it == string::npos) {
        return false;
    }

    it = s.find(s2, it+2);
    if (it == string::npos) {
        return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> s;
    if (check("AB", "BA") || check("BA", "AB")) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
