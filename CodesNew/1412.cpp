#include <bits/stdc++.h>
using namespace std;
int nb,ns,nc,pb,ps,pc,cb,cs,cc;
long long r;
bool ok(long long mid)
{
    long long ans=0;
    if(cb){
        if(mid*cb>nb)
    ans+=((mid*cb-nb)*pb);
    }
    if(cs){
        if(mid*cs>ns)
    ans+=((mid*cs-ns)*ps);
    }
    if(cc){
        if(mid*cc>nc)
    ans+=((mid*cc-nc)*pc);
    }
    return (r>=ans?1:0);
}
int main()
{
    string s;
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0;i<s.size();++i)
        cb+=(s[i]=='B'),cs+=(s[i]=='S'),cc+=(s[i]=='C');
    long long lo=0,hi=1e15,mid;
    while(lo<hi)
    {
        mid=(lo+hi+1)/2;
        if(ok(mid))
            lo=mid;
        else
            hi=mid-1;
    }
    cout<<hi;
    return 0;
}
