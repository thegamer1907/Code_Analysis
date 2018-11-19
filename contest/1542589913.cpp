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
int main()
{
    string t,t1[105];
    ll i,n,j;
    while(cin>>t>>n)
    {
        map<char,ll>mp,mp1;
        bool f=0;
        for(i=1;i<=n;i++)
        {
            cin>>t1[i];
            if(t1[i]==t)f=1;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if((t1[i][1]==t[0]&&t1[j][0]==t[1]))
                    f=1;
            }
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
