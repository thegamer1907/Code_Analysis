#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin>>n;
    int arr[n],item;
     cin>>item;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int beg=1,end=n,mid,save=0;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    arr[0]=0;
    for(int i=1;i<=n;i++ )
    {
        beg=i;
        end=n;
        while(beg<=end)
        {
            mid=(beg+end)/2;
            
            if(arr[mid]-arr[i-1]<=item)
            {            
                save=mid-i+1;
                beg=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        ans = max(ans, save);
    }
    cout<<ans;
}