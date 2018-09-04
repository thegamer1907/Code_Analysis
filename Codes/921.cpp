#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int maxn = 100010;
int ans,n,k,suma[maxn],sumb[maxn];
char s[maxn];

bool check(int x)
{
    for (int i = 1; i + x - 1 <= n; i++)
    {
        int j = i + x - 1;
        if ((suma[j] - suma[i - 1] <= k) || (sumb[j] - sumb[i - 1] <= k))
            return true;
    }
    return false;
}

int main()
{
    scanf("%d%d",&n,&k);
    scanf("%s",s + 1);
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 'a')
        {
            suma[i] = suma[i - 1] + 1;
            sumb[i] = sumb[i - 1];
        }
        else
        {
            suma[i] = suma[i - 1];
            sumb[i] = sumb[i - 1] + 1;
        }
    }
    int l = 1,r = n;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    printf("%d\n",ans);

    return 0;
}
