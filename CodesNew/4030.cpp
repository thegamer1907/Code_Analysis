#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll x,n,q,arrows,sum=0;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(i>0)arr[i]+=arr[i-1];
    }
    for(int i=1;i<=q;i++)
    {
        cin>>arrows;
        sum+=arrows;
        x=upper_bound(arr,arr+n,sum)-arr;
        if(x>=n)
        {
          sum=0;
          x=0;
        }
        cout<<n-x<<"\n";
    }
    return 0;
}
