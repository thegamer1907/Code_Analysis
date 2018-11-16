#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,t,i,j;
    cin>>n>>t;
    vector<ll>a(n+1);
    vector<ll>vis;
    for(i=0;i<n-1;i++)
        cin>>a[i];
    vis.push_back(1);
    ll curr=1;
    while(curr<n)
    {
        curr=curr+a[curr-1];
        vis.push_back(curr);
    }
    bool flag=0;
    for(i=0;i<vis.size();i++)
    {
        if(vis[i]==t)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
