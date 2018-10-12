#include <bits/stdc++.h>
using namespace std;
int arr[123456],key,n;
int BS(int i)
{
    int s=0, e=n ,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]-arr[i]<=key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return s-1;
}
int main()
{
    int mx=0;
    cin>>n>>key;
       for(int i=1 ; i<=n ; i++)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    for(int i=0 ; i<n ; i++)
    {
        int start=BS(i);
        if(arr[start]-arr[i]<=key)
            mx=max(start-i,mx);
    }
    cout<<mx;
    return 0;
}
