#include <bits/stdc++.h>
using namespace std;

char c;
string s;
int ans, n, last;

int main() {
    cin >> n >> s;
    c = s[0];
    for (int i = 0; i < n; i++) {
        if (s[i] == c)
            continue;
        else {
            ans += max(0, i - last - 1);
            last = i;
            c = s[i];
        }
    }
    ans += max(0, n - 1 - last);
    cout << ans;
}