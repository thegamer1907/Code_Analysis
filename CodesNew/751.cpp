#include<bits/stdc++.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char s1[1005][505],s2[1005][505];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s1[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%s",s2[i]);
    }
    if(n>m) printf("YES\n");
    else if(n<m) printf("NO\n");
    else if(n==m)
    {
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(strcmp(s1[i],s2[j])==0) res++;
            }
        }
        if(res%2==0) printf("NO\n");
        else printf("YES\n");
    }

}
