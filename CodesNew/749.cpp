#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1111],b[1111];
    int n,m;
    int sum1,sum2;
    map<string,int>t;
    int res;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%s",a);
            t[a]++;
        }
        res=0;
        for(int j=0; j<m; j++)
        {
            scanf("%s",b);
            if(t[b])
            {
                res++;
            }
        }
        if((n-res+(res%2))>m-res)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}

