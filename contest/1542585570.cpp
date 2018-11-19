#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int type[20];
int cnt[20];
int nm = 0;
int kn[4];
int n, k;
int total = 0;

void dfs(int v)
{
    if (v == nm)
    {
        memset(kn, 0, sizeof(kn));
        total = 0;
        for (int j = 0; j < nm; j++)
        {
            for (int b = 0; b < k; b++)
            {
                if ((j >> b) & 1)
                {
                    kn[b] += cnt[j];
                }
            }
            total += cnt[j];
        }
        if (total)
        {
            int  tst = 0;
            for(int j = 0; j  <k;j++)
            if (total <= (total - kn[j]) * 2)
            {
                tst++;
            }
            if (tst == k)
            {
                printf("YES");
                exit(0);
            }
        }

        return;
    }
    for (int t = 0; t <= min(6,type[v]); t++)
    {
        cnt[v] = t;
        dfs(v + 1);
    }
}

int main()
{
    scanf("%i%i", &n, &k);
    nm = 1 << k;
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        for (int j = 0; j < k; j++)
        {
            int x;
            scanf("%i", &x);
            t |= (x << j);
        }
        type[t]++;
    }
    dfs(0);
    printf("NO");
}