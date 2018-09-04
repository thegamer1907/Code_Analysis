//
//  main.cpp
//  cfgym
//
//  Created by shubhojeet on 10/27/17.
//  Copyright © 2017 shubhojeet. All rights reserved.
//

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define MAX  100005
#define mp make_pair
#define ll long long
#define pb push_back
#define piii pair<ll,pair<ll,ll> >
#define fastscan ios_base::sync_with_stdio(0); cin.tie(NULL);

using namespace std;
using namespace __gnu_pbds;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>os;

string str;

ll dpa[MAX];

ll n,k;

ll dpb[MAX];

ll fx(ll cur)
{
    ll i,j;
    for(i=0;i<n,i+cur<=n;i++)
    {
        ll range = i+cur-1;
        if(i==0)
        {
            if(dpa[range] + k>= cur)
                return 1;
            if(dpb[range] + k>= cur)
                return 1;
        }
        else
        {
            if(dpa[range] - dpa[i-1] + k>= cur)
                return 1;
            if(dpb[range] - dpb[i-1] + k>= cur)
                return 1;
        }
    }
    return 0;
}

int main()
{
    fastscan;
    cin>>n>>k;
    ll i,j;
    cin>>str;
    if(str[0]=='a')
        dpa[0] = 1;
    else
        dpb[0] = 1;
    for(i = 1;i < n;i++)
    {
        dpa[i]+=dpa[i-1];
        dpb[i]+=dpb[i-1];
        if(str[i]=='a')
            dpa[i]++;
        else
            dpb[i]++;
    }
    ll lo = 0;
    ll hi = n;
    ll ans = 1;
    while(lo<=hi)
    {
        ll mid = (lo +hi)/2;
        if(fx(mid))
        {
            ans = max(ans,mid);
            lo = mid+1;
        }
        else
        {
            hi = mid-1;
        }
    }

    if(ans==0)
        ans++;
   // cout<<fx(5)<<" "<<dpa[4]-dpa[0]<<endl;
    cout<<ans<<endl;
    return 0;
}
