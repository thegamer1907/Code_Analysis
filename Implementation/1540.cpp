#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    
    int last = 1, mx = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1])
            last++;
        else {
            mx = max(mx, last);
            last = 1;
        }
    }
    mx = max(mx, last);
    
    if (mx >= 7)
        cout << "YES";
    else
        cout << "NO";
}