#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#define ll long long int
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
using namespace std;

int k(string s) {
    for (int i = 9; i; i--) {
        bool y = 0;
        for (int j = 0; j < (1 << i); j++) {
            string t;
            for (int l = 0; l < i; l++) {
                if (j & (1 << l)) t += '1';
                else t += '0';
            }
            if (s.find(t) == string::npos) {
                y = 1;
                break;
            }
        }
        if (!y) return i;
    }
    return 0;
}

int main() {
    int n, m, a, b, z[202] = {};
    string s[202] = {};
    cin >> n;
    fr1(n) cin >> s[i];
    cin >> m;
    for (int i = n + 1; i <= n + m; i++) {
        cin >> a >> b;
        s[i] = s[a] + s[b];
        if (s[i].length() > 1100) {
            string t = s[i].substr(0, 550) + s[i].substr(s[i].length() - 550, 550);
            s[i] = t;
        }
        z[i] = max({z[a], z[b], k(s[i])});
        cout << z[i] << '\n';
    }
}