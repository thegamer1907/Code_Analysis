#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n, a, b, k = 0;
    cin >> n >> a >> b;
    a--;
    b--;
    while (a != b) {
        a /= 2;
        b /= 2;
        n /= 2;
        k++;
    }
    if (n == 1) {
        cout << "Final!";
        return 0;
    }
    cout << k;
    return 0;
}
