#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,x;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n-1;i++)
    cin>>a[i];
    for( ll i=1;i<=m;i+=a[i-1])
     if(i==m)  
    {cout<<"YES";return 0;}
    cout<<"NO";
    return 0;
}