#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, i, x = 1;
    cin>>n>>m;
    ll a[n+2];
    for(i=1;i<n;i++) cin>>a[i];
    while(x<m) x += a[x];
    if(x==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

