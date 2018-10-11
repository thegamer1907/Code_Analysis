#include <iostream>

using namespace std;

const int N = 1000002;

int n, t, a[N];

int main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    int i = 0, j = 1, s = 0, nr = 0;
    while (j <= n) {
        if (a[j] - a[i] <= t) {
            nr = max(nr, j - i);
            j++;
        }
        else i++;
    }
    cout << nr;
}
