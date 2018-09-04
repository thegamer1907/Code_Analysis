#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 2 * max(a[0], l - a[n - 1]);
    for (int i = 1; i < n; ++i)
        ans = max(ans, a[i] - a[i - 1]);
    cout << setprecision(9) << fixed;
    cout << ans / 2. << endl;
    return 0;
}