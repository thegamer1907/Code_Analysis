#include <bits/stdc++.h>
using namespace std;
string s;
int nb,ns,nc,pb,ps,pc,bb=0,ss=0,cc=0;
long long R,zero=0;
bool check(long long x)
{
    long long totB=x*bb;
    long long totS=x*ss;
    long long totC=x*cc;
 
    long long reqB=max(zero,totB-nb);
    long long reqS=max(zero,totS-ns);
    long long reqC=max(zero,totC-nc);
 
    long long total_price=reqB*pb+reqS*ps+reqC*pc;
 
    return R>=total_price;
}
int main()
{
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>R;
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]=='B')
            ++bb;
        else if(s[i]=='S')
            ++ss;
        else
            ++cc;
    }
    long long l=0,r=1e13;
    while(l<r)
    {
        long long mid=(l+r+1)/2;
        if(check(mid))
            l=mid;
        else
            r=mid-1;
    }
    cout<<l;
    return 0;
}
