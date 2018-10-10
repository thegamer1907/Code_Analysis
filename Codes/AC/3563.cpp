#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo 666666666

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n,m,k,x,s;
    cin>>n>>m>>k>>x>>s;
    ll ats = n*x;
    vector<ll>A(m),B(m),C(k),D(k);
    for(ll&y:A)cin>>y;
    for(ll&y:B)cin>>y;
    for(ll&y:C)cin>>y;
    for(ll&y:D)cin>>y;

    A.push_back(x);
    B.push_back(0);
    C.insert(C.begin(),0);
    D.insert(D.begin(),0);

    for(int i=0; i<A.size(); i++)
    if(s >= B[i])
    {
        int idx = upper_bound(D.begin(),D.end(),s-B[i]) - D.begin() - 1;
        ll left = max(n - C[idx],0LL);
        ats = min(ats, left*A[i]);
    }

    cout<<ats;
}
