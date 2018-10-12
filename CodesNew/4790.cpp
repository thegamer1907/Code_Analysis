#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n; cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int ans=n;
   int pt=n/2;
   sort(arr,arr+n);
   for(int i=0;i<n/2;i++)
   {
       while(1)
       {
           if(arr[i]*2 <= arr[pt])
           {
               ans--;
               pt++;
               break;
           }
          else pt++;
           if( pt == n) break;
       }
       if( pt == n) break;
   }
   cout<<ans;
    return 0;
}
