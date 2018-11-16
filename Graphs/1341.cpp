#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,arr[1000000],arr1[1000000],l=0,test=0;
    cin>>n>>m;
    m=m-1;
    for(i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i=i+arr[i])
    {
        arr1[l]=i;
        l++;
    }
    arr1[l]=i+arr[i];
    l++;
    for(i=0;i<l;i++)
    {
       if(arr1[i]==m)
       {
           test=1;
       }
    }
    if(test==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
