#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,l;
    cin>>n>>m;
    int arr[n];
    int mx=0,ind;
    int mn=INFINITY,mnind;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] > mx)
        {
            mx=arr[i];
            ind=i;
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
            mnind=i;
        }
    }
    int mxans,mnans;
    mxans=mx+m;
    for(i=0;i<m;i++)
    {
    //    arr[mnind]++;
        mn=INFINITY;
        for(j=0;j<n;j++)
        {
                    if(arr[j]<mn)
        {
            mn=arr[j];
            mnind=j;
        }
        }
        arr[mnind]++;
    }
     mn=0;
            for(j=0;j<n;j++)
        {
                    if(arr[j]>mn)
        {
            mn=arr[j];
            mnind=j;
        }
        }
        cout<<mn<<" "<<mxans<<endl;

}
