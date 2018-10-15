#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main()
{
    int n,q;
    while(~scanf("%d%d",&n,&q))
    {
        for(int i=0; i<n; i++)
            scanf("%I64d",&a[i]);
        for(int i=1; i<n; i++)
            a[i]+=a[i-1];
        long long s=0,x;
        while(q--)
        {
            scanf("%I64d",&x);
            s+=x;
            int d=lower_bound(a,a+n,s)-a;
            if(d==n)
            {
                s=0;
                printf("%d\n",n);
            }
            else if(a[d]==s)
            {
                if(d==n-1)
                    printf("%d\n",n),s=0;
                else
                 printf("%d\n",n-d-1);
            }
            else if(a[d]>s)
                printf("%d\n",n-d);
        }
    }
}
