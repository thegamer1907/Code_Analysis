#include <iostream>
#include <algorithm>
using namespace std;

int b[101], g[101];
int main()
{
    int n, m, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> g[i];
    sort(b + 1, b + n + 1);
    sort(g + 1, g + m + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (b[i] - g[j] == 1 || g[j] - b[i] == 1 || b[i] == g[j])
                if (b[i] != -1 || g[j] != -1)
                {
                    cnt++;
                    b[i] = -1;
                    g[j] = -1;
                }
        }
    }
    cout << cnt;
    return 0;
}