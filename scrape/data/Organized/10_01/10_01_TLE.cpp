#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mx=1e6;

int main()
{
    ll n,k,l,r,ans=0,cnt=0;
    int i,m;
    cin>>n>>m>>k;
    ll p[m];
    for(i=0;i<m;i++)
    cin>>p[i];
    i=0;
    while(i<m)
    {
     l=k*((p[i]-i)/(k+1));
     r=l+k+i;
     //cout<<l<<" "<<r<<endl;
     while(p[i]<=r)
        i++;
     ans++;
    }
    cout<<ans;



return 0;}