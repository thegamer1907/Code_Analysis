#include<iostream>

int main()
{
    int n, a[100], mx = 0, mn = 101, ans = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        mn = std::min(mn, a[i]);
        mx = std::max(mx, a[i]);
    }
    for(int i=0;i<n;i++)
        if(a[i] == mx)
        {
            for(int j=i;j;j--, ans++)
                a[j] ^= a[j-1] ^= a[j] ^= a[j-1];
            break;
        }
    for(int i=n-1;i>=0;i--)
        if(a[i] == mn)
        {
            for(int j=i+1;j<n;j++, ans++)
                a[j] ^= a[j-1] ^= a[j] ^= a[j-1];
            break;
        }
    printf("%d\n", ans);
}
