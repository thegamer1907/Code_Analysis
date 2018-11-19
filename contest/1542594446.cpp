#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

typedef long long ll;
using namespace std;

const ll MAXN = +100500;
const ll INF = 4e18;

int main() {
    string s;
    cin >> s;
    ll n;
    cin >> n;
    bool ok1 = 0;
    bool ok2 = 0;
    bool ok3 = 0;
    for(int i = 1; i <= n; i++) {
        string a;
        cin >> a;
        if(a == s) {
            ok3 = 1;
        }
        if(a[0] == s[1]) ok1 = 1;
        if(a[1] == s[0]) ok2 = 1;
    }
    if(ok3 || (ok1 && ok2)) {
        cout << "YES";
    } else cout << "NO";
}

