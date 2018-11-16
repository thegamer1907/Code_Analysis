#include<bits/stdc++.h>
using namespace std;
int mr(int a[],int n)
{
    int maxso=a[0];
    int cur=a[0];
    for (int j=1;j<n;j++)
    {
        cur=max(a[j],cur+a[j]);
        maxso=max(cur,maxso);
        
    }
    return maxso;
}
int main()
{
    int k,e=0;
    cin>>k;
    int a[k];
    for (int j=0;j<k;j++)
    {
        cin>>a[j];
        if (a[j]==1)
        e++;
    }
    int arr[k];
    for (int j=0;j<k;j++)
    {
        if (a[j]==1)
        arr[j]=-1;
        else
        arr[j]=1;
    }
    
    cout<<e+mr(arr,k);
    return 0;
    
}