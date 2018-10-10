#include <bits/stdc++.h>
using namespace std;
double j,k,x,y,arr[1001],a[1001];
long long i,n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[n+1]=k;
    arr[0]=0;
    sort(arr,arr+n+1);
    //for(i=0;i<=n+1;i++)
    //{
      //  cout<<arr[i]<<" ";
    //}
    for(i=0;i<=n;i++)
    {
        a[i]=(arr[i+1]-arr[i])/2;
    }
    //cout<<endl;
     //for(i=0;i<=n;i++)
    //{
       // cout<<a[i]<<" ";
    //}
    //cout<<endl;
    a[0]*=2;
    a[n]*=2;
    sort(a,a+n+1);
   //  for(i=0;i<=n;i++)
    //{
       // cout<<a[i]<<" ";
    //}
    cout<<setprecision(9)<<a[n];
    return 0;
}
