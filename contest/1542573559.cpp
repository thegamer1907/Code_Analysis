#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    string pass;
    cin>>pass;
    ll n,f=1;
    cin>>n;
    vector<string> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==pass)
            f=0;
    }
    if(!f)
    {
        cout<<"YES";
        return 0;
    }
    map<char,ll> mp1,mp2;
    for(ll i=0;i<n;i++)
    {
        mp1[a[i][0]]++;
        mp2[a[i][1]]++;
    }
    if(mp1[pass[1]]>0&&mp2[pass[0]]>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
