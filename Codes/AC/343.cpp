#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 10, mod = 1e9 + 7, maxa = 1e6 + 100;
const long long inf = 2e18 + 13;
long long max(long long x, long long y){return (x > y ? x : y);}
long long min(long long x, long long y){return (x < y ? x : y);}

long long a[maxn];
long long num[maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, m;
    cin >> n;
    for(int i = 0; i < n; i++){cin >> a[i];}
    int ind = 1;
    int p = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < a[i]; j++)
        {
            num[p] = ind;
            p++;
        }
        ind++;
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        x--;
        cout << num[x] << endl;
    }
    return 0;
}
