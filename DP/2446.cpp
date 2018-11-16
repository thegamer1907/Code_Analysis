#include <bits/stdc++.h>

#define F first
#define S second
#define ll long long
#define p_b push_back
#define m_p make_pair

using namespace std;

const int N = 2e5 + 5, INF = 1e9 + 7;

ll i, j, n, m, ans;
ll d[N];


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    ios_base::sync_with_stdio(0);

    int t, k;
    cin >> t >> k;
    d[0] = 1;
    for (i = 0; i <= 1e5; i++)
    {
        d[i + 1] += d[i];
        d[i + 1] %= INF;
        d[i + k] += d[i];
        d[i + k] %= INF;
    }
    for (i = 1; i <= 1e5; i++)
        d[i] += d[i - 1];
    for (j = 1; j <= t; j++)
    {
        int a, b;
        cin >> a >> b;
        cout << (d[b] - d[a - 1]) % INF << endl;
    }
}
