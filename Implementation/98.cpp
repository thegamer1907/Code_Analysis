#include <bits/stdc++.h>

#define ododo ios_base::sync_with_stdio(0), cin.tie(0)

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int q = n / 2, rounds = 0;
    for (; q; ) {
        rounds++;
        q /= 2;
    }
    q = rounds;
    int r = n, l = 1;
    for (int d1 = 2, d2 = 1;;) {
        int mid = (l + r) / 2;
        if (a <= mid && b <= mid) {
            q--;
            r = mid;
            d1 += 2;
            d2 += 2;
        } else if (a > mid && b > mid) {
            q--;
            l = mid + 1;
            d1++;
            d2++;
        } else {
            if (q == rounds)
                cout << "Final!\n";
            else
                cout << q;
            return 0;
        }
    }
    cout << q << endl;
    return 0;
}
