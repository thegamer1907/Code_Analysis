#include <iostream>

using namespace std;

typedef unsigned long long UINT64;

bool check(UINT64 n, UINT64 k) {
    UINT64 c, d;
    
    c = 0;
    d = n;
    while (d > 0) {
        if (d <= k) {
            c += d;
            d = 0;
        } else {
            c += k;
            d -= k;
            d -= (UINT64)(d / 10);
        }
    }
    
    return (c + c) >= n;
}

int main(int argc, const char * argv[]) {
    UINT64 l, r, m, n;
    
    cin >> n;
    l = 1;
    r = n;
    
    while (l < r) {
        m = (l + r) / 2;
        if (check(n, m) == true) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    
    cout << l << "\n";
    
    return 0;
}
