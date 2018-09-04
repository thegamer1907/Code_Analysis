#include <iostream>
#include <algorithm>

using namespace std;

typedef long long LL;

LL vas(LL n, LL k) {
    LL total = 0;
    while (n > 0) {
        if (n < k) {
            total += n;
            n = 0;
            break;
        } else {
            total += k;
            n -= k;
        }
        n -= n / 10;
    }
    return total;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    LL n;
    cin >> n;
    LL left = 0, right = n;
    while (left + 1 < right) {
        LL mid = (left + right) / 2;
        LL v = vas(n, mid);
        if (2 * v >= n) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << right << endl;
    return 0;
}
