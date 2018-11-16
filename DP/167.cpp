#include <iostream>
#include <algorithm>

using namespace std;

const int N = 109;

int a[N], b[N];

int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; ++i)
        cin >> b[i];
    sort(a, a + n), sort(b, b + m);
    int ans(0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (max(a[i] - b[j], b[j] - a[i]) <= 1) {
                b[j] = -2;
                ++ans;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}

