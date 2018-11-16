#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int n,k,count=0;
    cin>>n>>k;
    long long int a[n];
    for(long long int i=0;i<n;i++)
        cin>>a[i];
    for(long long int i=0;i<n;i++)
    {   if(a[i]>=a[k-1] && a[i]>0)
            count++;
    }    
    cout<<count<<"\n";
}