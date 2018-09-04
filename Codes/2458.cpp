#include<bits/stdc++.h>

using namespace std;

#define int long long

int n, d, f[10000050], m, maxx, x, L, R;
bool kt[10000050];
int mp[10000050];
vector<int> a;

void snt()
{
    for (int i = 2; i * i <= 10000000; i++)
        if (kt[i] == false)
            for (int j = i * i; j <= 10000000; j += i)
                kt[j] = true;
}

main()
{
    //freopen("385C.INP", "r", stdin);
    //freopen("385C.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    kt[1] = true;   snt();
    for (int i = 2; i <= 10000000; i++)
        if (kt[i] == false) a.push_back(i);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        x = a[i];
        for (int j = 1; x * j <= 10000000; j++)
            f[x] += mp[x * j];
    }
    int p = a[a.size() - 1];
    for (int i = 1; i <= p; i++)
        f[i] = f[i - 1] + f[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> L >> R;
        R = min(R, p);
        if (L > p)
        {
            cout << 0 << "\n";
            continue;
        }
        cout << f[R] - f[L - 1] << "\n";
    }
    return 0;
}
