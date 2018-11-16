#include<stdio.h>
#include<string.h>
int a[40005],b[40005];
int main()
{
    memset(b,0,sizeof(b));
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n-1;i++)
        scanf("%d",&a[i]);
        int cnt=1;
    while(cnt<n)
    {
        b[cnt+a[cnt]]=1;
        cnt=cnt+a[cnt];
    }
    if(b[m]==1) printf("YES");
    else printf("NO");
    return 0;
}
