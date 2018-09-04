#include<iostream>
const int N = 500001;

int main()
{
    int n;
    long long a[N], pre[N] = {0};
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%lld", &a[i]), pre[i] = pre[i-1] + a[i];
    if(pre[n] % 3 != 0 || n < 3) 
        printf("0\n");
    else
    {
        long long suf[N], part = pre[n] / 3, part2 = part*2;
        suf[n] = 0;
        long long ans = 0;
        for(int i=n-1;i;i--)
            if(pre[i] == part2)
                suf[i] = suf[i+1] + 1;
            else
                suf[i] = suf[i+1];
        for(int i=1;i<=n;i++)
            if(pre[i] == part)
                ans += suf[i+1];
        printf("%lld\n", ans);
    }
}
