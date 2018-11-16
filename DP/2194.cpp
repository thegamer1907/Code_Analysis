#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>s;
int  A[100000];
int main()
{
    ll n,m,k;
    cin>>n>>m;
    for(ll i=1; i<=n; i++)cin>>A[i];
    for(ll i=n; i>0; i--)
    {
        s.insert(A[i]);
        A[i]=s.size();
    }
    for(ll i=1; i<=m; i++)
    {
        cin>>k;
        cout<<A[k]<<endl;
    }

}
