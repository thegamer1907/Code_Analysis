#include<iostream>
#include<algorithm>

int main()
{
    int n, l, a[1000];
    scanf("%d %d", &n, &l);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    std::sort(a, a+n);

    double ans = 0;
    for(int i=1;i<n;i++)
        ans = std::max(ans, (a[i]-a[i-1])/2.0);
    ans = std::max(ans, a[0] * 1.0);
    ans = std::max(ans, l-a[n-1] * 1.0);
    printf("%.9lf\n", ans);
}
