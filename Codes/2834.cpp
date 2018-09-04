#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
#define debug(x) cerr << #x << " = " << x << "\n";
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    int a[1000006] = {}, z = 0, b[1000006] = {};
    cin >> s;
    fr1(s.length()) {
        int x = i - 1;
        while (x && a[x] != i - 1 && s[a[x]] != s[i - 1]) x = a[x];
        if (x) a[i] = a[x] + 1;
    }
    fr1(s.length()) if (a[i]) b[a[i]]++;
    z = a[(int)s.length()];
    if (b[z] > 1) {
        cout << s.substr(0, z);
        return 0;
    }
    z = a[z];
    while (z) {
        if (b[z]) {
            cout << s.substr(0, z);
            return 0;
        }
        z = a[z];
    }
    cout << "Just a legend";
}
