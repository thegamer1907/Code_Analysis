#include<bits/stdc++.h>
using namespace std;
const int MXN = 3e5 + 10;
int n, k, l, r, c, mid, A[MXN];
int Check(int t)
{
    int p = 0;
    for (int i = 0; i < t; i++)
    {
        if (A[i] == 1)
            p ++;
    }
    if (p + k >= t)
        return (1);
    for (int i = t; i < n; i++)
    {
        if (A[i - t] == 1)
            p --;
        if (A[i] == 1)
            p ++;
        if (p + k >= t)
            return (1);
    }
    return (0);
}
int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    r = n + 1;
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (Check(mid) == 1)
            l = mid;
        else
            r = mid;
    }
    printf("%d\n", l);
    for (int i = 0; i < l; i++)
    {
        if (A[i] == 1)
            c ++;
    }
    if (c + k >= l)
    {
        for (int j = 0; j < l; j++)
            printf("1 ");
        for (int j = l; j < n; j++)
            printf("%d ", A[j]);
        return (0);
    }
    for (int i = l; i < n; i++)
    {
        if (A[i] == 1)
            c ++;
        if (A[i - l] == 1)
            c --;
        if (c + k >= l)
        {
            for (int j = 0; j < i - l + 1; j++)
                printf("%d ", A[j]);
            for (int j = 0; j < l; j++)
                printf("1 ");
            for (int j = i + 1; j < n; j++)
                printf("%d ", A[j]);
            return (0);
        }
    }
}
