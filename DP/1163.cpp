#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int a[120];
    while(~scanf("%d",&n))
    {

        int ans=0,res=0,sum;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i])
                ans++;
        }
        if(n==ans)
        {
            printf("%d\n",n-1);
            continue;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                sum=0;
                for(int k=i; k<=j; k++)
                {
                    if(a[k])
                        sum--;
                    else
                        sum++;
                }
                res=max(res,sum);
            }
        }
        printf("%d\n",ans+res);
    }
    return 0;
}
