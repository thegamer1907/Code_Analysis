#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    long long int i,j,l,h,mid,kb,ks,kc,cb,cs,cc,rb=0,rs=0,rc=0,tot,ans=0,tb,ts,tc;
    cin>>s;
    cin>>kb>>ks>>kc;
    cin>>cb>>cs>>cc;
    cin>>tot;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='B')
            rb++;
        if(s[i]=='S')
            rs++;
        if(s[i]=='C')
            rc++;
    }
    l=1;h=100000000000000;
    while(l<=h)
    {
        mid=(l+h)/2;
       // cout<<mid<<"\n";
        tb=mid*rb;
        ts=mid*rs;
        tc=mid*rc;
    tb=(tb-kb)>0? tb-kb:0;
    ts=(ts-ks)>0? ts-ks:0;
    tc=(tc-kc)>0? tc-kc:0;
    if(tb*cb+ts*cs+tc*cc<=tot)
    {
        //cout<<mid<<"\n";
        ans=mid;
        l=mid+1;
    }
    else
        h=mid-1;
    }
    cout<<ans;

    return 0;

}
