#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,ctr[500001],arr[500001];
    cin>>n;
    for(long int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    long int index=0,last=n/2-1;
    for(long int i=0;i<n;i++)
    ctr[i]=1;
    long int sum=0;
    for(int i=0;i<(n/2);i++)
    {
        index=lower_bound(arr+last+1,arr+n,2*arr[i])-arr;
        last=index;
        if(index<n)
        ctr[i]=0;
    }
    for(int i=0;i<n;i++)
    if(ctr[i])
    sum++;
    cout<<sum;
}