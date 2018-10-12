#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    set<string>p;
    set<string>e;
    set<string>c;
    ll p1=0;
    ll e1=0;
    ll c1=0;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        p.insert(s);
        c.insert(s);
    }
    p1=p.size();
    for(ll j=0;j<m;j++)
    {
        string s;
        cin>>s;
        e.insert(s);
        c.insert(s);
    }
    e1=e.size();
    c1=c.size();
    ll comm=p1+e1-c1;
    p1=p1-comm;
    e1=e1-comm;
    if(comm%2==1)
        p1++;
    if(p1>e1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
