#include <bits/stdc++.h>

using namespace std;

const int N = 2e3 + 100;

bool dig10(int n) {
    int r = 0;
    while (n) {
        r += n % 10;
        n /= 10;
    }
    return r == 10;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int k;
    cin >> k;
    int now = 19;
    int p = 1;
    while (p < k) {
        do { ++now; } while (not dig10(now));
        ++p;
    }
    cout << now << '\n';
}