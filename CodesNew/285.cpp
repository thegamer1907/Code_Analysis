#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],t;
    cin>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int end=n,mid,save=0,beg;
    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i];
    }
 arr[0]=0;
 for(int i=1;i<=n;i++)
 {
     beg=i;
     end=n;
     while(beg<=end)
     {
                mid=(beg+end)/2;
                if(arr[mid]-arr[i-1]<=t)
                {            
                    save=max(save,mid-i+1);
                    beg=mid+1;
                }
               else
               end=mid-1;
    }
}
  cout<<save;
}