#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
int main()
{
ios_base::sync_with_stdio(false);
ll n,m,k;
cin>>n>>m>>k;
ll l=1,r=n*m;
while(l<r)
{
    ll mi=ceil((l+r)/2.0);
    ll c=0;
    for(int i=1;i<=n;++i)
    {
        c+=min(m,(mi-1)/i);
    }
    if(c<k)
    {
        l=mi;
    }
    else
    {
        r=mi-1;
    }
}
cout<<l;
}