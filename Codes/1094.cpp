#include <iostream>
#include <algorithm>

using namespace std;
const int N = 100 * 1000 + 5;
pair <int, int> a[N];

int main() {
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n);
    int p1 = 0;
    int p2 = 1;
    long long sum = a[0].second;
    long long ans = a[0].second;
    while (p2 < n) {
        if (a[p2].first - a[p1].first < d)
            sum += a[p2++].second;
        else
            sum -= a[p1++].second;
        ans = max(ans, sum);
    }
    cout << ans;
}
