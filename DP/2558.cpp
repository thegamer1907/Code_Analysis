#include<iostream>

int main()
{
    int n, a[100001];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    int ans = 1, cnt = 1;
    for(int i=1;i<n;i++)
        if(a[i] > a[i-1])
        {
            cnt++;
            ans = std::max(ans, cnt);
        }
        else
        {
            cnt = 1;
            ans = std::max(ans, cnt);
        }

    printf("%d\n", ans);
}
