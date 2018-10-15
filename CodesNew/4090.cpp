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

    arr[0]=0;
    for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
            arr[i]+=arr[i-1];
          //  cout<<arr[i]<<" ";
        }
     //   cout<<'\n';
    for(ll i=0;i<q;i++)
            cin>>brr[i];
    ll ca=0;
    for(ll i=0;i<q;i++)
    {
        ca+=brr[i];
        ll low=upper_bound(arr,arr+n+1,ca)-arr;
        low-=1;
      //  cout<<"low="<<low<<"value="<<brr[i]<<'\n';
        if(low>=n)
             {
                  cout<<n<<'\n';
                  ca=0;
                  continue;
             }
        else{
            cout<<n-low<<'\n';
           // ca-=arr[low];
           }
    }
    return 0;
}



