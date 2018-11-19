#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define I(a) scanf("%d",&a)
#define I2(a,b) scanf("%d%d",&a,&b)
#define I3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define L(a) scanf("%lld",&a)
#define L2(a,b) scanf("%lld%lld",&a,&b)
#define L3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define PI(a) printf("%d",a)
#define PL(a) printf("%lld",a)
#define PT(t) printf("Case %d: ",t)
#define PB push_back
#define x first
#define y second
#define xx first.first
#define xy first.second
#define yx second.first
#define yy second.second
#define SC scanf
#define PC printf
#define NL printf("\n")
#define SET(a) memset(a,0,sizeof a)
#define SETR(a) memset(a,-1,sizeof a)
#define SZ(a) ((int)a.size())-1
#define f(i,a,b) for(int i=a;i<=b; i++)
#define fr(i,a,b) for(int i=a;i<=b; i++)
#define frr(i,a,b) for(int i=a;i>=b; i--)
#define frv(i,a)  for(int i=0;i<a.size();i++)
#define pi 2.0*acos(0.0)
#define R(a) freopen(a, "r", stdin);
#define W(a) freopen(a, "w", stdout);
#define CB(x) __builtin_popcount(x)
#define STN(a) stringtonumber<ll>(a)
#define lol printf("BUG\n")
#define Endl "\n"
#define mk make_pair
using namespace std;
template <class T> inline T BM(T p, T e, T M)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
template <class T> inline T gcd(T a, T b)
{
    if(b == 0)return a;
    return gcd(b, a % b);
}
template <class T> inline T mdINV(T a, T M)
{
    return BM(a, M - 2, M);
}
template <class T> inline T PW(T p, T e)
{
    ll ret = 1;
    for(; e > 0; e >>= 1)
    {
        if(e & 1) ret = (ret * p);
        p = (p * p);
    }
    return (T)ret;
}


template <class T>bool ISLEFT(T a, T b, T c)
{
    if(((a.xx - b.xx) * (b.yy - c.yy) - (b.xx - c.xx) * (a.yy - b.yy)) < 0.0)return 1;  //Uporer dike //A,b,c, x okkher ordera sorted
    else return 0;
}

#define md 2100000007ll
#define  mx 200004
#define base 193ll

typedef pair<int,int >P;
//////////////////////////
/////////////////////////

int main()
{
    int n,m;
    I2(n,m);
    int ar[20];
    SET(ar);
    fr(i,1,n)
    {
        int num=0;
        fr(j,0,m-1)
        {
            int x;
            I(x);
            if(x)num|=(1<<j);
        }
        ar[num]++;
    }
    if(ar[0]){PC("YES\n");

    return 0;
    }
    else
    {
        int ara[5];
        int ko=(1<<m);
        for(int j=1; j<(1<<ko); j++)
        {
            bool fl=0;
            memset(ara,0,sizeof ara);
            for(int i=0; i<ko; i++)
            {
                if((j&(1<<i)))
                {
                    if(!ar[i])fl=1;
                    for(int l=0; l<m; l++)
                    {
                        if((i&(1<<l)))ara[l]++;
                    }
                }
            }
            if(!fl)
            {
                int lp=CB(j);
                int cl=0;
                for(int op=0; op<m; op++)
                {
                    if(ara[op]*2>lp)cl=1;
                }
                if(!cl)
                {
                    PC("YES\n");
                    return 0;
                }
            }
        }
    }
    PC("NO\n");
    return 0;
}
