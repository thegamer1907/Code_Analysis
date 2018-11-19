#include <bits/stdc++.h>
#define pii pair<int, int>
#define mp make_pair
#define F first
#define S second
#define PB push_back
#define N 100005
#define maxc 1000000007

using namespace std;

int n, k, a[N][5], v[N], dd[200];
int main()
{
    //freopen("INP.TXT", "r", stdin);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cin >> a[i][j];
            v[i] |= a[i][j]*(1 << (j-1));
        }
        dd[v[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= 100; j++)
            if (dd[j] && ((j & v[i]) == 0))
            {
                cout <<"YES";
                return 0;
            }
    cout <<"NO";
}
