#include <bits/stdc++.h>
using namespace std;
int S[10001];
int C[10001];
long long F[10001];
long long INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> S[i];
    for (int i = 1; i <= n; ++i)
        cin >> C[i];
    for (int i = 1; i <= n; ++i)
        F[i] = INF;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j < i; ++j)
            if (S[j] < S[i])
                F[i] = min(F[i], 1ll * C[j]);
    long long ans = INF;
    for (int i = 3; i <= n; ++i)
        for (int j = 2; j < i; ++j)
            if (S[j] < S[i] && F[j] != INF)
                ans = min(ans, C[i] + C[j] + F[j]);
    if (ans == INF)
        cout << -1;
    else
        cout << ans;
    return 0;
}
