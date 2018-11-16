#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    int a[1000006] = {};
    bool b[1000006] = {};
    cin >> s;
    fr1(s.length()) {
        int x = i - 1;
        while (x && a[x] != i - 1 && s[a[x]] != s[i - 1]) x = a[x];
        if (x) a[i] = a[x] + 1;
    }
    //fr1(s.length()) cout << a[i] << ' ';
    fr1(s.length() - 1) b[a[i]] = 1;
    int c = a[s.length()];
    while (c) {
        if (b[c]) {
            cout << s.substr(0, c);
            return 0;
        }
        c = a[c];
    }
    cout << "Just a legend";
}
//aabaacaabaa
