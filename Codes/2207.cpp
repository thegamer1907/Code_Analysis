#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (auto &i : v)
        cin >> i;
    map<long long, long long> m;
    long long now_sum = 0, cur_sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cur_sum += v[i];
        m[cur_sum]++;
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        m[cur_sum]--;
        cur_sum -= v[i];
        now_sum += v[i];
        if (m[now_sum] >= 1)
            ans = max(now_sum, ans);
    }
    cout << ans;

    return 0;
}
