#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,ans=0,base;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==k-1)
        {
            base=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=base && arr[i]>0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
