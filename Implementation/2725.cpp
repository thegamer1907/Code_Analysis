#include<iostream>

int main()
{
    int n, p[101], r[101];
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%d", &p[i]), r[p[i]] = i;
    for(int i=1;i<=n;i++)
        printf("%d%c", r[i], i==n?'\n':' ');
}
