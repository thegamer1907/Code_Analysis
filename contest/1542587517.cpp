#include <bits/stdc++.h>
using namespace std;
int check[30][5];
int flag = 0, n;
string a, b;
int main() {
    cin >> a;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> b;
        if (flag) {
            continue;
        }
        if (b == a) {
            flag = 1;
        } else {
            check[b[0] - 'a'][1] = 1;
            check[b[1] - 'a'][2] = 1;
        }
    }
    if (flag || (check[a[0] - 'a'][2] && check[a[1] - 'a'][1])) {
        cout << "YES" << endl;
    } else
        cout << "NO" << endl;
    return 0;
}
