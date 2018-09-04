#include <iostream>
#include <cstdio>

using namespace std;

long long n , k , p[100];

void solve (long long lg , long long pos) {
    if (p[lg] == 0) {
        solve (lg - 1, pos);
        return;
    }

    if (pos == p[lg - 1] + 1) {
        cout << lg;
        return;
    }

    if (pos > p[lg - 1] + 1) {
        solve (lg - 1, pos - p[lg - 1] - 1);
        return;
    }

    if (pos < p[lg - 1] + 1) {
        solve (lg - 1 , pos);
        return;
    }
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen ("input.txt" , "r" , stdin);
    #endif // ONLINE_JUDGE

    cin >> n >> k;
    for (long long i = 1; i <= n; ++i) {
        p[i] = p[i - 1] * 2 + 1;
        if (p[i] > k) {
            break;
        }
    }

    solve (n , k);
    return 0;
}