#include <cstdio>
#include <algorithm>
using namespace std;

int n, k;
bool d[1 << 10];

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        int tmp = 0;
        for (int j = 1; j <= k; j++)
        {
            int t;
            scanf("%d", &t);
            tmp = (tmp << 1) + t;
        }
        d[tmp] = true;
    }
    for (int i = 0; i <= 16; i++)
    for (int j = 0; j <= 16; j++)
    {
        if (d[i] && d[j] && (i & j) == 0)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
