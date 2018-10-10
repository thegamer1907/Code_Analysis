#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,l;
    cin>>n;
    cin>>l;
    long double arr[n];
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    long double maxdiff=0;
    for(long long i=0;i<n-1;i++)
    {
        if(maxdiff<arr[i+1]-arr[i])
        {
            maxdiff = (double) arr[i+1]-arr[i];
        }
    }
    // cout<<maxdiff<<endl;
    if(2*arr[0]>maxdiff)
    {
        maxdiff=arr[0]*2;
        // cout<<"lol\n";
    }
    if(2*(l-arr[n-1])>maxdiff)
    {
        maxdiff = 2*(l-arr[n-1]);
    }
    cout<<setprecision(10)<<maxdiff/2;
    return 0;
}
