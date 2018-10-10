#include<iostream>

void solve(int x, int n, int a[])
{
    int l=1, r=n, mid, ans = 1;
    while(l <= r)
    {
        mid = (l+r) / 2;
        if(a[mid] >= x)
            r = mid - 1, ans = mid;
        else
            l = mid + 1;
    }
    printf("%d\n", ans);
}
int main()
{
    int n, a[100001]={0}, m, q[100000];
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &a[i]), a[i] += a[i-1];
    scanf("%d", &m);
    for(int i=0;i<m;i++)
    {
        scanf("%d", &q[i]);
        solve(q[i], n, a);
    }
}
