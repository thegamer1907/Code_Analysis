#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo 666666666

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,k,z=0;
    cin>>n>>k;
    vector<ll>A(n);
    map<ll,vector<ll>>mp;
    map<ll,ll>f;

    for(int i=0; i<n; i++)
    {
        cin>>A[i];
        mp[A[i]].push_back(i);
        if(A[i]!=0)
        f[A[i]]++;
        else z++;
    }

    ll ats = 0;

    if(k!=1)
    for(int i=0; i<n; i++)
    if(A[i]%k==0 && A[i]!=0)
    {
        ll le = lower_bound(mp[A[i]/k].begin(),mp[A[i]/k].end(),i)-mp[A[i]/k].begin();
        ll ri = mp[A[i]*k].end() - lower_bound(mp[A[i]*k].begin(),mp[A[i]*k].end(),i);
        if(A[i]!=0)
        ats+=le*ri;
    }
    ats+=z*(z-1)*(z-2)/6;

    if(k==1)
    for(auto&p : f)
    if(p.second > 2)
    {
        ll N = p.second;
        ats+= N*(N-1)*(N-2)/6;
    }

    cout<<ats;
}
