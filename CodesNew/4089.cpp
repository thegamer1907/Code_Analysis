#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mp map<ll,ll>
ll p=1e9+7;
/* Iterative Function to calculate (x^y)%p in O(log y) */

ll n,q;
 ll arr[2000000];
    ll brr[2000000];
 int main()
{
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>n>>q;

    cin>>arr[0];
    for(ll i=1;i<n;i++)
        {
            cin>>arr[i];
            arr[i]+=arr[i-1];
          //  cout<<arr[i]<<" ";
        }
     //   cout<<'\n';
    for(ll i=0;i<q;i++)
            cin>>brr[i];
    for(ll i=0;i<q;i++)
    {
        ll low=lower_bound(arr,arr+n,brr[i])-arr;
      //  cout<<"low="<<low<<"value="<<brr[i]<<'\n';
        if(brr[i]>=arr[n-1])
             {
                  cout<<n<<'\n';
                  continue;
             }

           brr[i+1]+=brr[i];
        if(brr[i]<arr[low])
            {
                cout<<n-low<<'\n';
                continue;
            }

        cout<<n-(low+1)<<'\n';
    }
    return 0;
}


