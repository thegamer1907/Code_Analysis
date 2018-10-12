#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX 300005

using namespace std;

ll arr[MAX];

ll pre[MAX];

ll n,k;

ll fx(ll st,ll cur)
{
    ll range = pre[cur] - pre[st-1];
    //cout<<st<<" "<<range<<" "<<cur<<endl;
    if(range<=k)
        return 1;
    return 0;
}

int main()
{
    cin>>n>>k;
    ll i,j;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
            pre[i] = pre[i-1] + 1;
        else
            pre[i] = pre[i-1];
    }
    ll mx = 0;
    ll idx;
    ll ed = 0;
    for(i=1;i<=n;i++)
    {
        ll lo = i;
        ll hi = n;
        ll ans;
        while(lo<=hi)
        {
            ll mid = (lo + hi)/2;
            if(fx(i,mid))
            {
                ans= mid;
                if(ans - i +1 > mx)
                {
                    mx = ans - i + 1;
                    idx = i;
                    ed = ans;
                }
                lo = mid+1;
            }
            else
            {
                hi = mid - 1;
            }
        }

    }
    cout<<mx<<endl;
    for(i=1;i<=n;i++)
    {
        if(i>=idx&&i<=ed)
            cout<<1<<" ";
        else
            cout<<arr[i]<<" ";
    }
    return 0;
}
