#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long func(const vector<long long>& v, int k) {
    vector<long long> d(v.size());
    for (int i = 0; i < d.size(); i++)
        d[i] = v[i] + (i + 1) * 1LL * k;
    sort(d.begin(), d.end());
    long long sum = 0;
    for (int i = 0; i < k; i++)
        sum += d[i];
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0;
    int r = n;
    while (l < r) {
        int c = (l + r + 1) / 2;
        if (func(v, c) <= s)
            l = c;
        else
            r = c - 1;
    }
    cout << l << " " << func(v, l) << "\n";

    return 0;
}
