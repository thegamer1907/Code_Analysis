#include <bits/stdc++.h>

using namespace std;

const int NMAX = 1e5 + 5;

int x[NMAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> x[i];
     if (x[0] == 0) {
        cout << 0;
        return 0;
     }
    int sc = x[k - 1], i = 0;
    while (x[i] >= sc && i < n && x[i] != 0) {
        i++;
    }
    cout << i;
    return 0;
}
