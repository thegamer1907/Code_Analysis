#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    if ((a <= n / 2 && b > n / 2) || (a > n / 2 && b <= n / 2)) {
        cout << "Final!";
    }
    else {
        if (a % 2 == 0)
            a--;
        if (b % 2 == 0)
            b--;
        if (a > b)
            swap(a, b);
        int q = 1;
        int cnt = 0;
        if (a == b)
            cnt = 1;
        while (a / q != b / q) {
            cnt++;
            q *= 2;
        }
        cout << cnt;
    }
    return 0;
}
