#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll n,m,co=0,i;
    cin>>n>>m;
    string s;
    map<string,ll> mp;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        mp[s]=1;
    }
    for(i=1;i<=m;i++)
    {
        cin>>s;
        if(mp[s]==1)
        {
            co++;
        }
    }
    if(co%2!=0)
    m--;
    if(n>m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}