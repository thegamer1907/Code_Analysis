//2017-10-05-15.06
//A

#include <bits/stdc++.h>
using namespace std;

string a[150];

int main() {
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == s) {
            puts("YES");
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][0] == s[1] && a[j][1] == s[0]) {
                puts("YES");
                return 0;
            }
            if (a[i][1] == s[0] && a[j][0] == s[1]) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
