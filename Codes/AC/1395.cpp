#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, S, T = 0;
    cin >> n >> S;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k1 = 0, k2 = n + 1;
    while (k1 < k2 - 1) {
        int kc = (k1 + k2) / 2;
        vector<long long> ac(a);
        for (int i = 0; i < n; i++)
            ac[i] += static_cast<long long>(i + 1) * kc;
        sort(ac.begin(), ac.end());
        long long Tk = accumulate(ac.begin(), ac.begin() + kc, 0LL);
        if (Tk <= S)
            k1 = kc, T = Tk;
        else
            k2 = kc;
    }
    cout << k1 << ' ' << T << '\n';
}