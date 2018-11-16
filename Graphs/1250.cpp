#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=1,l,m,a,b,t;
    cin>>n>>t;
    bool ara[n];
    for(i=1;i<=n;i++)
        ara[i]=0;
    ara[1]=1;
    for(i=1;i<n;i++)
    {
        cin>>a;
        if(i==k)
        {
            k+=a;
            ara[k]=true;
        }
    }
    if(ara[t])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
