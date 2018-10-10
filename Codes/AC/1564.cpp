#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mod 1000000007
#define bitcount    __builtin_popcountll
#define pb push_back
int a[100005];
ll val[100005];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    ll n,S,ans=0,i,l,r,m,cnt,temp,temp1,value=0;
    slld(n);
    slld(S);
    for(i=0;i<n;i++)
        sd(a[i]);
    l=0;
    r=n;
    while(l<=r)
    {
        m=(l+r)/2;
        temp=0;
        cnt=0;
        for(i=0;i<n;i++)
            val[i]=a[i]+m*(i+1);
        sort(val,val+n);
        i=0;
        for(i=0;i<m;i++)
            temp+=val[i];
        //cout<<l<<" "<<m<<" "<<r<<" "<<cnt<<" "<<S-temp<<endl;
        if(temp<=S)
        {
            ans=m;
            value=temp;
            l=m+1;
        }
        else
            r=m-1;
    }
    cout<<ans<<" "<<value<<endl;
    return 0;
}
