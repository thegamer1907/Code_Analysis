#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    ll ans = 0, ind = 0, m;
    for(int i = 0; i < k; i++)
    {
        ans += v[i];
    }
    m = ans;
    for(int i = 1; i + k <= n; i++)
    {
        ans -= v[i - 1];
        ans += v[i + k - 1];
        if(ans < m)
        {
            m = ans;
            ind = i;
        }
    }
    cout << ind + 1;
}