#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1000000010000
#define mod1 1000000007
ll arr[1000000];
ll arr1[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll total,money;
    cin>>total>>money;
    for(ll i=1; i<=total; i++)
        cin>>arr[i];
    ll lo=1,hi=total;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        bool mark=true;
        for(ll i=1; i<=total; i++)
            arr1[i]=arr[i]+i*mid;
        sort(arr1+1,arr1+1+total);
        ll sum=0;
        for(ll i=1; i<=mid; i++)
        {
            sum+=arr1[i];
            if(sum>money)
            {
                mark=false;
                break;
            }
        }
        if(!mark)
            hi=mid-1;
        else
            lo=mid+1;
    }
    ll mid=lo-1;
    for(ll i=1; i<=total; i++)
        arr1[i]=arr[i]+i*mid;
    sort(arr1+1,arr1+1+total);
    ll sum=0;
    for(ll i=1; i<=mid; i++)
        sum+=arr1[i];
    cout<<mid<<" "<<sum<<endl;
}
