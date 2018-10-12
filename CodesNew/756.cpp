#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
char s1[1005][505];
char s2[1005][505];
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%s",s1[i]);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%s",s2[i]);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(strcmp(s1[i],s2[j])==0)
                {
                    sum++;
                }
            }
        }
        if(n==m)
        {
            if(sum%2==0)
            {
                printf("NO\n");
            }
            else printf("YES\n");
        }
        else
        {
            int x1=n-sum;
            int x2=m-sum;
            if(x1>x2) printf("YES\n");
            else printf("NO\n");
        }
    }

}
