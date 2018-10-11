#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,sum=0,ans=0;
   cin>>n>>t;
   int arr[n];
   for(int i=0;i<n;++i)
    cin>>arr[i];
   for(int i=0,j=0;i<n&&j<n;++i)
        sum+=arr[i],((sum<=t)?(ans=max(ans,i-j+1)):(sum-=arr[j],++j));
   cout<<ans;
    return 0;
}