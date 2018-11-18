
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    char a,b;
    char m[500];
    int n;
    while(~scanf("%c%c",&a,&b))
    {
        getchar();
        scanf("%d",&n);
        getchar();
        for(int i=1;i<=2*n;i+=2)
        {
            scanf("%c%c",&m[i],&m[i+1]);
            getchar();
        }
        int cnt=0;
        for(int i=1;i<=2*n;i++)
        {
            if(m[i]==a&&i%2!=0)
            {
                if(m[i+1]==b)
                {
                    printf("YES\n");
                    cnt=1;
                    goto mark;
                }
            }
            if(m[i]==a&&i%2==0)
            {

                for(int k=1;k<2*n;k++)
                {
                    if(m[k]==b&&k%2!=0)
                    {
                        printf("YES\n");
                        cnt=1;
                        goto mark;
                    }
                }
            }
        }
        mark:
        if(cnt==0)
        {
            printf("NO\n");
        }
    }
    return 0;
}








