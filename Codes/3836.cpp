#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mod 1000000007
#define bitcount    __builtin_popcountll
#define pb push_back
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int nb,ns,nc,pb,ps,pc,i,len;
    ll r,ans=0,l,h,m,valb,vals,valc,value,b=0,s=0,c=0;
    string st;
    cin>>st;
    len=st.length();
    for(i=0;i<len;i++)
    {
        if(st[i]=='B')
            b++;
        else if(st[i]=='S')
            s++;
        else
            c++;
    }
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    l=0;
    h=1e14;
    while(l<=h)
    {
        value=0;
        m=(l+h)/2;
        valb=m*b;
        vals=m*s;
        valc=m*c;
        if(valb>nb)
        {
            value+=(1ll*(valb-nb)*pb);
        }
        if(vals>ns)
        {
            value+=(1ll*(vals-ns)*ps);
        }
        if(valc>nc)
        {
            value+=(1ll*(valc-nc)*pc);
        }
        if(value>r)
        {
            h=m-1;
            continue;
        }
        else if(value<=r)
        {
            m++;
            value=0;
            valb=m*b;
            vals=m*s;
            valc=m*c;
            if(valb>nb)
            {
                value+=(1ll*(valb-nb)*pb);
            }
            if(vals>ns)
            {
                value+=(1ll*(vals-ns)*ps);
            }
            if(valc>nc)
            {
                value+=(1ll*(valc-nc)*pc);
            }
            if(value>r)
            {
                ans=m-1;
                break;
            }
            else
            {
                l=m;
                continue;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
