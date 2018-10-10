#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;
ll n,a[100005],cost[100005];







int main()
{
    ll i,k;
    cin>>n>>k;
    for(i=1; i<=n; i++) cin>>a[i];

    ll low=1,high=n,mid, tot;
    ll a1=0,a2=0;

    while(low<=high)
    {
        mid = (low+high)/2;
        tot=0;
        for(i=1; i<=n; i++)
        {
            cost[i]= (a[i]+ (i)* mid);

        }

        sort(cost+1,cost+(n+1));
        for(i=1; i<=mid; i++)
            tot+= cost[i];

        if(tot<=k)
        {
            a1 = mid;
            a2 = tot;
            low= mid+1;
        }
        else
        {
            high = mid-1;
        }



    }

    cout<<a1<<" "<<a2<<endl;

}
