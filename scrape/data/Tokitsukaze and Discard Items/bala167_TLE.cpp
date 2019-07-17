#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <bits/stdc++.h>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update>	tree_set;
typedef unsigned long long ll;
typedef long double ld;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll mod=1e9 + 7;
ll func(ll key , ll l,ll r)
{
    ll s=1;
    ll e=1e18;

    while(s<=e)
    {
        ll mid= (s+e)>>1;

        if(l*mid <=key && key<= mid*r)
            return mid;

        if(key< l*mid)
            s=mid+1;
        else
            e=mid-1;
    }
    return 1;
}

int main()
{
    fast();
    ll n,m,k;
    cin>>n>>m>>k;

    ll arr[m];
    for(ll i=0;i<m;i++)
        cin>>arr[i];

    sort(arr,arr+m);
    ll ans = 0;
    ll l=1,r=k,cnt=0;
    for(ll i=0;i<m;)
    {
        if(arr[i]>=l && arr[i]<=r)
        {
            cnt++;
            i++;
        }
        else
        {
            if(cnt){
                r = r + cnt;
                ans++;
                cnt=0;
            }
            else
            {
                if(cnt)
                    ans++;
                cnt=0;
                l = r+1;
                r = l + k-1;
                if(i!=n)
                {
                    ll mul = func(arr[i],l,r);
                    l = l*mul;
                    r = r*mul;
                }

            }
        }
    }

    if(cnt)
        ans++;

    cout<<ans;

}