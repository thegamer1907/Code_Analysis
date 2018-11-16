#include <bits/stdc++.h>
using namespace std;
int n, t, now = 1, arr[30010];
int main() {
    cin >> n >> t;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    while (now < t) {
        now += arr[now];
    }
    puts(now == t ? "Yes" : "No");
    return 0;
}