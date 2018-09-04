#include <bits/stdc++.h>
#define nmax 50005
#define INF 1000000000000
using namespace std;

int main()
{
    long long ans,n,t,actt,secv,x,i;
    ans=0;t=INF;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        secv=(x/n);
        actt=secv*n+(i-1)%n;
        if(actt>=x)
        {
            if(actt<t)
            {
                ans=i;
                t=actt;
            }
        }
        else
        {
            actt+=n;
            if(actt<t)
            {
                ans=i;
                t=actt;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}
