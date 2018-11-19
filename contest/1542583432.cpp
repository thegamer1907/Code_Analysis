#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e2 + 5;

char s[maxn][3];
char a[3];

int main()
{
    int n;
    while (cin >> a) {
        cin >> n;
        int o = 0, k = 0;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            if (s[i][0] == a[1])
                o = 1;
            if (s[i][1] == a[0])
                k = 1;
            if (s[i][0] == a[0] && s[i][1] == a[1]) {
                o = 1; k = 1;
            }
        }
        if (o && k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
