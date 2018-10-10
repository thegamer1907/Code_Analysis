#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    n=s.length();
    vector<ll> v;
    v.push_back(-1);
    for(i=0;i<n;i++)
        if(s[i]=='b')
            v.push_back(i);
    v.push_back(n);
    ll m=0;
    for(i=1;i<=v.size()-1-k;i++)
    {
        ll tmp=v[i+k]-v[i-1]-1;
        m=max(m,tmp);
    }
    if(v.size()-2<k)
        m=n;
    vector<ll> v1;
    v1.push_back(-1);
    for(i=0;i<n;i++)
        if(s[i]=='a')
            v1.push_back(i);
    v1.push_back(n);
    ll m1=0;
    for(i=1;i<=v1.size()-1-k;i++)
    {
        ll tmp=v1[i+k]-v1[i-1]-1;
        m1=max(m1,tmp);
    }
    if(v1.size()-2<k)
        m1=n;
    cout<<max(m,m1)<<endl;
}

