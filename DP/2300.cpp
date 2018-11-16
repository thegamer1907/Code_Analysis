#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    ll n,m;
    cin >> n >> m;
    ll a[n],freq[100001]={0},b[n]={0};
    for(ll i=0;i<n;i++)
        cin>>a[i];
    freq[a[n-1]]++;
    b[n-1]=1;
    for(ll i=n-2;i>=0;i--)
    {
        if(freq[a[i]]==0)
        {
            freq[a[i]]++;
            b[i]=b[i+1]+1;
        }
        else
        {
            freq[a[i]]++;
            b[i]=b[i+1];
        }
    }
    ll x;
    for(ll i=0;i<m;i++)
    {
        cin>>x;
        cout<<b[x-1]<<endl;
    }
    return 0;
}