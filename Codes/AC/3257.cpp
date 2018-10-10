#include<stdio.h>

int n;
int m[100002];
int res=-1, rm=1e9;

int main()
{
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&m[i]);
        if(rm>m[i]/n) rm=m[i]/n;
    }
    for(int i=0 ; i<n ; i++) m[i]-=rm*n;
    for(int i=0 ; i<n ; i++)
    {
        if(m[i]-i<=0)
        {
            res=i;
            break;
        }
    }
    if(res==-1)
    {
        for(int i=0 ; i<n ; i++)
        {
            if(m[i]-i-n<=0)
            {
                res=i;
                break;
            }
        }
    }
    printf("%d",res+1);
    return 0;
}
