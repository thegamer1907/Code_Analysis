#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j; //loop variables
    int t; //test cases
    int n;
    cin>>n>>t;
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0, maxi=0;
    j=0;
    for(i=0;i<n && j<n;)
    {
        if(a[j]>t)
        {
            sum=0;
            i = ++j;
        }
        else if(sum+a[j]<=t)
        {
            sum+=a[j++];
            maxi = max(maxi, j-i);
        }
        else if(sum+a[j]>t)
        {
            sum-=a[i];
            i++;
        }
       // cout<<a[j]<<" "<<maxi<<" "<<j-i<<" "<<sum<<"\n";
        maxi = max(maxi,j-i);
    }
    cout<<maxi<<"\n";
    return 0;
}
