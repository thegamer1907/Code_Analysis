/*
Nahid Hossain
Jahangirnagar University
Roll:54
*/
#include<bits/stdc++.h>
#define ll          long long int
#define db          double
#define pf          printf
#define sf          scanf
#define ff          first
#define ss          second
#define clr         clear()
#define sz          size()
#define pb          push_back
#define mk          make_pair
#define pi          acos(-1)
#define inf         123456789
#define mod         1000000007
#define ull         unsigned long long int
#define f(i,k,n)    for(i=k;i<n;i++)
#define fr(i,n,k)   for(i=n;i>=k;i--)
#define ent(a)      scanf("%lld",&a)
#define ent2(a,b)   scanf("%lld%lld",&a,&b)
#define ent3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define mem(a)      memset(a,0,sizeof(a))
#define vec(v,s)    vector<ll>v[s]
#define arr(a,s)    ll a[s];
//#define check(n,pos) (n&(1<<pos))
//#define set(n,pos)  (n|(1<<pos))
//knight and king//
int dr[]={2,2,-2,-2,1,-1,1,-1};
int dc[]={1,-1,1,-1,2,2,-2,-2};
int dr1[]={0,0,1,1,1,-1,-1,-1};
int dc1[]={1,-1,1,0,-1,0,1,-1};
int dr2[]={0,0,1,-1};
int dc2[]={1,-1,0,0};
////////////////////////////
using namespace std;
ll chec(ll a,ll b)
{
    char t[10],t1[10];
    ll s=0,s1=0;
    while(a!=0)
    {
        t[s++]=a%2+'0';
        a/=2;
    }
    t[s]='\0';
    while(b!=0)
    {
        t1[s1++]=b%2+'0';
        b/=2;
    }
    t1[s1]='\0';
    //strrev(t);
    //strrev(t1);
    ll k=min(s,s1);
    //cout<<t<<" "<<t1<<endl;
    for(ll i=0;i<k;i++)
    {
        if(t[i]=='1'&&t1[i]=='1')
            return -1;
    }
    return 1;
}
int main()
{
    ll i,j,n,k,s,x;
    while(cin>>n>>k)
    {
        vector<ll>v;
        map<ll,ll>mp;
        for(i=1;i<=n;i++)
        {
            s=0;
            for(j=1;j<=k;j++)
            {
                cin>>x;
                s=s+(x<<(j-1));
            }
            if(mp[s]==0)
                v.pb(s);
            mp[s]=1;
        }
        bool f=0;
        sort(v.begin(),v.end());
        if(v[0]==0)
            f=1;
        for(i=0;i<v.sz;i++)
        {
            for(j=0;j<v.sz;j++)
            {
                if(chec(v[i],v[j])==1)
                {
                    f=1;
                }
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
