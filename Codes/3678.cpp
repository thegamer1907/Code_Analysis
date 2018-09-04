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
string s;
cin>>s;
int nb,ns,nc;
cin>>nb>>ns>>nc;
int rb=0,rs=0,rc=0;
for(int i=0;i<s.length();++i)
{
    if(s[i]=='B')
        ++rb;
    if(s[i]=='S')
        ++rs;
    if(s[i]=='C')
        ++rc;
}
int pb,pc,ps;
cin>>pb>>ps>>pc;
ll rr;
cin>>rr;
ll l=0,r=1000*(rr+1);
ll m;
while(l<r)
{
    m=ceil((l+r)/2.0);
    int f=0;
    ll x=rr;
    x-=max(m*rb-nb,(ll)0)*pb;
    x-=max(m*rc-nc,(ll)0)*pc;
    x-=max(m*rs-ns,(ll)0)*ps;
    if(x>=0)
    {
        l=m;
    }
    else
    {
        r=m-1;
    }
}
cout<<l;
}