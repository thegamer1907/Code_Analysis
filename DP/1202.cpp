#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;cin>>n;int mac=0,one=0,zero=0,p,arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]==0) zero++;else one++;}
    for(int i=0;i<n;i++)
        for(int j=1+i;j<=n;j++)
    {
        int o=count(arr+i,arr+j,1);
        int z=count(arr+i,arr+j,0);
        p=one+z-o;
        if(p>mac) mac=p;
    }
    cout<<mac;
}
