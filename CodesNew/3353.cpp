#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,mini,maxi,s=0,x,y;

    cin>>n>>m;
    int a[n];
    for(i=0;i<n;i++){cin>>a[i];s+=a[i];}
    maxi=a[0];
    mini=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>maxi) maxi=a[i];
        else if(a[i]<mini) mini=a[i];
    }

    x=maxi-mini;
    y=(int)ceil((s+m)*1.0/n);

    cout<<max(maxi,y)<<" "<<maxi+m;
}
