#include <bits/stdc++.h>
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui32;
using namespace std;

const int MAXN = 100;
string str[MAXN + 1];

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    bool ok = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            string t = str[i] + str[j];
            if (t.find(s) != -1) {
                ok = true;
                break;
            }
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}