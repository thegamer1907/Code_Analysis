#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1e5+10;
int a[maxn];
int main()
{
    int n,k;
    int ans=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=a[k]&&a[i]>0) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
