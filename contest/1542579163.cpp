#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[20];
int b[20];
int n,k;
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            int p,q=0;
            for(int i=0;i<k;i++)
        {
            scanf("%d",&p);
            q=q*2+p;
        }
          a[q]=1;
        }
        bool have=false;
        int c=0;
        for(int i=1;i<=15;i++)
        {
            if(a[i])
                {
                    b[++c]=i;
                }
        }
        if(a[0])
            have=true;
        else
        {
            for(int i=1;i<=c;i++)
                for(int j=i+1;j<=c;j++)
                {
                    if((b[i]&b[j])==0)
                    {
                        have=true;
                        break;
                    }
                }
        }
        if(have)
            printf("YES\n");
        else
            printf("NO\n");
    }
}




















