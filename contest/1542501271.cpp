#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 10;

int n, k, a[maxN], L, R;

long long cnt[maxN], ans = 0, f[25][maxN];

void Add(int x)
{
    ans += cnt[a[x]];
    cnt[a[x]]++;
}

void Delete(int x)
{
    --cnt[a[x]];
    ans -= cnt[a[x]];
}

void Get(int l, int r)
{
    while(L > l) Add(--L);
    while(r > R) Add(++R);
    while(L < l) Delete(L++);
    while(R > r) Delete(R--);
}

void Sol(int u, int Lr, int Rr, int optL, int optR)
{
    if(Lr > Rr) return;
    int mid = (Lr + Rr) / 2;
    f[u][mid] = 1e18+10;
    int lim = min(mid, optR);
    int mx = 0;
    for(int i=optL; i<=lim; ++i)
    {
        while(L > i) Add(--L);
        while(mid > R) Add(++R);
        while(L < i) Delete(L++);
        while(R > mid) Delete(R--);
        if (f[u][mid] > f[u-1][i-1] + ans)
        {
            f[u][mid] = f[u-1][i-1] + ans;
            mx = i;
        }
    }
    Sol(u, Lr, mid - 1, optL, mx);
    Sol(u, mid + 1, Rr, mx, optR);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i=1; i<=n; ++i)
    {
        cin >> a[i];
        ans += cnt[a[i]];
        ++cnt[a[i]];
        f[1][i] = ans;
    }

    L = 1;
    R = n;
    for (int i=2; i<=k; ++i)
        Sol(i, 1, n, 1, n);

    cout << f[k][n];
}
