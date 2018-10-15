#include<bits/stdc++.h>
#define ll          long long
#define ios        	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
string a,b,c;int d[300000],flag;
bool check(ll mid)
{
    flag=0;c=a;
    for(ll i=0;i<mid;i++)
    c[d[i]-1]='0';
    for(ll i=0;i<c.size();i++)
    {
        if(c[i]==b[flag])
        flag++;
    }
    if(flag==b.size())
    return true;
    else 
    return false;
}
int main()
{
    cin>>a>>b;
    for(ll i=0;i<a.size();i++)
    cin>>d[i];c=a;
    ll lo=0,hi=a.size(),mid=(hi+lo)/2;
    while(hi-lo>1)
    {
        if(check(mid))
        lo=mid;
        else 
        hi=mid;
        mid=(hi+lo)/2;
        
    }
    cout<<lo;
}