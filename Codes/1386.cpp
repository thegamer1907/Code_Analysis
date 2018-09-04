#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N];
long long S;
long long t[N];

bool check(int k, long long &res) {
    for (int i = 1; i <= n; i++) t[i] = a[i] + 1LL * k * i;
    sort(t + 1, t + n + 1);
    long long sum = 0;
    for (int i = 1; i <= k; i++) sum += t[i];
    if (S >= sum) {
        res = sum;
        return true;
    }
    return false;
}

int main() {
    cin >> n >> S;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int lo = 0, hi = n;
    long long res = 0;
    while (lo < hi) {
        int mid = (lo + hi) >> 1;
        if (check(mid, res)) lo = mid + 1;
        else hi = mid - 1;
    }
    if (!check(lo, res)) lo--;
    cout << lo << " " << res << endl;
}
