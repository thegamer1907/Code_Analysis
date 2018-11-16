#include <cstdio>
#include <algorithm>

const int MaxN = 100 + 7;

int n;
int count[MaxN][2];

int main(void)
{
    scanf("%d", &n);
    ++n;
    for (int i = 1; i < n; ++i)
    {
        int origin;
        scanf("%d", &origin);
        count[i][origin] = count[i - 1][origin] + 1;
        count[i][!origin] = count[i - 1][!origin];
    }

    int ans = -1;
    for (int i = 1; i < n; ++i)
        for (int j = 1; j <= i; ++j)
            ans = std::max(ans,
                    count[n - 1][1] - count[i][1] + count[j - 1][1]
                    + count[i][0] - count[j - 1][0]);

    printf("%d\n", ans);
    return 0;
}

