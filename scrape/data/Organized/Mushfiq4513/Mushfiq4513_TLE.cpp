#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    int m, k, cnt = 0;

    cin >> n >> m >> k;

    ll h = k, p[m];

    for (int i=0; i<m; ++i)
        cin >> p[i];

    for (int i=0; i<m; ++i) {
        int d = 0;
        while (p[i] <= h)
            ++d, ++i ;
        if (d == 0) {
            int tmp = i<m ? p[i] - h : 0;
            h += tmp / k * k;
            if (tmp % k) h += k;
        }
        else
            ++cnt, h += d;
        --i;
    }

    cout << cnt << endl;

    return 0;
}