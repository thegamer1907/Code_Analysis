#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define pii pair < ll , ll >

#define ff first

#define ss second

vector < pii > vv;

int main()
{
    ll n,i,j,ara[100005],mn=1e18,ans;

    scanf("%I64d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%I64d",&ara[i]);
    }

    for(i=1; i<=n; i++)
    {
        ll end_time=ara[i]+1;

        ll step;

        if(end_time<=i)
        {
            step=1;
        }

        else
        {

            step=(end_time-i)/n;

            if((end_time-i)%n) step++;

            step++;
        }

        ll term=i+(step-1)*n;

        if(term<mn)
        {
            mn=term;

            ans=i;
        }



    }

    printf("%I64d\n",ans);

    return 0;

}
