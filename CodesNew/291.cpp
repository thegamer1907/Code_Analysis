#include<bits/stdc++.h>
#define ll long long
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
ll arr[100000];
int main()
{
    FastRead
    ll n,m;
    cin>>n>>m;
    ll a[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll j=0,k=0,sum=0,b=0;
    for(ll i=1;i<=n;i++)
    {
        sum+=a[i];
        if(sum>m)
        {
            while(sum>m)
            {j++;
                sum-=a[j];

            }
        }
        if(i-j>k)
        {
            k=i-j;//cout<<k<<endl;
        }

    }
    cout<<k<<endl;



}
