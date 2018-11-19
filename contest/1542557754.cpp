#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define Tpair pair <int, int>
using namespace std;

typedef long long ll;
const int   oo = 1e9 + 1;
const int  mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int n, i, j, k, a, s[maxn];
bool flag[maxn] = {};

void Init()
{
    cin >> n >> k;
    for (i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            cin >> a;
            s[i] += (a << (4 - j));

        }
        flag[s[i]] = 1;
    }
    for (i = 1; i <= n; ++i)
    {
        for (j = 0; j <= 15; ++j)
            if (flag[j] && ((s[i] & j) == 0))
            {
                cout << "YES"; return;
            }
    }
    cout << "NO";
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("Div438C.inp", "r", stdin);
    //freopen(".out", "w", stdout);

	Init();
}
//Date 10 Month 10 Year 2017


