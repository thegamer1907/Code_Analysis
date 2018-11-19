#include <bits/stdc++.h>
using namespace std;

#define oo 1000000000
#define ii pair <int, int>
#define vi vector <int>
#define vii vector <ii>
#define eb emplace_back

int main() {
    char pw0, pw1, c0, c1;
    int n;
    while (cin >> pw0 >> pw1) {
        int found0 = 0;
        int found1 = 0;
        cin >> n;
        while (n--) {
            cin >> c0 >> c1;
            if (c1 == pw0) found0 = 1;
            if (c0 == pw1) found1 = 1;
            if (c0 == pw0 and c1 == pw1) found0 = found1 = 1;
        }
        cout << (found0 and found1 ? "YES" : "NO") << endl;
    }
    return 0;
}

// 1509240522028
