#include <iostream>
using namespace std;
typedef int Int;
#define int long long
#define INF 0x3f3f3f3f
#define maxn 105
int a[maxn];
Int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int sum = 0, tmp = 0;
    int Max = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            sum++;
            tmp--;
        }
        else
        {
            tmp++;
        }
        Max = max(Max, tmp);
        if (tmp < 0)
        {
            tmp = 0;
        }
    }
    if (Max == 0)
        cout << n - 1 << endl;
    else
        cout << sum + Max << endl;
    return 0;
}