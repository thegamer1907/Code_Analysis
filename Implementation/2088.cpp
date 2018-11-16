
 #include <bits/stdc++.h>

#define first F
#define second S

using namespace std;

using ll = long long;
using ld = long double;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    int c = 0;
    while (n--) {
        int e, f, g;
        cin >> e >> f >> g;
        a += e;
        b += f;
        c += g;
    }
    if (a == 0 && b == 0 && c == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}