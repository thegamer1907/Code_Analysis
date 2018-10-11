#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000][505],b[1000][505];
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%s",b[i]);
            for(int j=0;j<n;j++)
            {
                if(strcmp(a[j],b[i])==0)
                    ans++;
            }
        }
        if(n>m)
            printf("YES\n");
        else if(n<m)
            printf("NO\n");
        else if(n==m)
        {
            if(ans%2==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
