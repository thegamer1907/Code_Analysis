#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
    #define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
    #define dbg(...)
#endif

const int MAX = 3e4 + 5;
int n, t, a[MAX];
bool b[MAX];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> t;
    if (n == 1) {
        cout << "YES\n";
        return 0;
    }
    for (int i = 1; i < n; ++i)
        cin >> a[i];
    int i = 1;
    while (i < n && 1 <= a[i] && a[i] <= n-i) {
        i = i + a[i];
        if (i == t) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}
