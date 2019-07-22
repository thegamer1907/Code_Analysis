#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e5+5;
ll a[N];

int main()
{
    ios::sync_with_stdio(false);
    ll n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
        cin>>a[i];
    ll s=0,ans=0;
    ll i=0;
    while(i<m)
    {
        int v=(a[i]-s+k-1)/k;
        int j=i;
        while(i<m&&v==((a[i]-s+k-1)/k))
            i++;
        ans++;
        s+=(i-j);
    }
    cout<<ans<<endl;
}