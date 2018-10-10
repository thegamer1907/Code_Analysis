#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 100;

int pile[maxn];

int main()
{
    ios::sync_with_stdio(0);
    int l, n;
    cin >> n >> l;
    long double a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    cout << std::fixed;
    cout.precision(10);
    long double ans = 0;
    for(int i = 1; i < n; i++){
        ans = max(ans, (a[i] - a[i - 1]) / 2);
    }
    ans = max(ans, a[0]);
    ans = max(ans, l - a[n - 1]);
    cout << ans;
}
