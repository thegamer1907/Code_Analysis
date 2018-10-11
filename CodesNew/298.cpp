#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
typedef long long Long;

int main() {
    ios_base::sync_with_stdio(0);
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int mx = 0, cap = 0;
    for (int l = 0, r = 0; l < n;) {
        if (r < n && cap <= t) {
            cap += arr[r++];
        } else {
            cap -= arr[l++];
        }
        if (cap <= t)
            mx = max(mx, r - l);
    }
    printf("%d\n", mx);

    return true & false;
}
