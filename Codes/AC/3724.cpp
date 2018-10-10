#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll b,c,s,B,C,S,pb,pc,ps,tk;


bool ok(ll n)
{
    ll cost = 0;
    if(n*B>b)
        cost+=(n*B-b)*pb;
    if(n*C>c)
        cost+=(n*C-c)*pc;
    if(n*S>s)
        cost+=(n*S-s)*ps;
    //cout<<cost<<" "<<n<<endl;
    return (cost<=tk);

}
int main()
{
    string str;
    cin>>str;
    cin>>b>>s>>c;
    cin>>pb>>ps>>pc;
    cin>>tk;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='B')
        B++;
        else if(str[i]=='S')
            S++;
        else
            C++;
    }
    ll l=0,r=10000000000000;
    while(l<=r)
    {
        ll mid = (l+r)>>1;
        if(ok(mid))
            l = mid+1;
        else
            r=mid-1;
    }
    cout<<r<<endl;
    return 0;
}
