#include <bits/stdc++.h>
using namespace std;

#define ll long long int


int main()
{
    ll n,t;
    scanf("%lld %lld",&n,&t);
    ll arr[n];
    ll sum=0,ans=0,p=0;

    for (ll i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
        sum=sum+arr[i];
        while(sum>t)
        {
            sum=sum-arr[p++];
        }
        ans=max(ans,i-p+1);
    }

    printf("%lld\n",ans);
    return 0;
}
