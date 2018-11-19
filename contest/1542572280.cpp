#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;

#define LL long long int
#define uLL unsigned long long int

#define S(a) scanf("%d",&a)
#define S2(a,b) scanf("%d%d",&a,&b)
#define S3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define SLL(a) scanf("%lld",&a)
#define SLL2(a,b) scanf("%lld%lld",&a,&b)
#define SLL3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define SC(a) scanf("%c",&a)
#define P(a) printf("%d",a)
#define PS(a) printf("%s",a)
#define PLL(a) printf("%lld",a)
#define PCASE(kk) printf("Case %d: ",kk++)
#define PCASENL(kk) printf("Case %d:\n",kk++)
#define NL puts("")

#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define pi (2.0*acos(0.0))
#define pii pair<int,int>

#define inf 100000000000000LL
#define md 1000000007


template<typename T>inline T POW(T B,T P)
{
    if(P==0) return 1;
    if(P&1) return B*POW(B,P-1);
    else return SQR(POW(B,P/2));
}
template <class T> inline T BMOD(T p,T e,T m)
{
    T ret=1;
    while(e)
    {
        if(e&1) ret=(ret*p)%m;
        p=(p*p)%m;
        e>>=1;
    }
    return (T)ret;
}
template <typename T>inline T ModInv(T b,T m)
{
    return BMOD(b,m-2,m);
}
template<typename T>inline T ABS(T a)
{
    if(a<0)return -a;
    else return a;
}
template<typename T>inline T gcd(T a,T b)
{
    if(a<0)return gcd(-a,b);
    if(b<0)return gcd(a,-b);
    return (b==0)?a:gcd(b,a%b);
}
template<typename T>inline T lcm(T a,T b)
{
    if(a<0)return lcm(-a,b);
    if(b<0)return lcm(a,-b);
    return a*(b/gcd(a,b));
}


//for(__typeof(pp.begin()) i=pp.begin(); i!=pp.end(); i++ )

//knight and king move....



//int Dx[]={-2,-1,1,2,1,2,-2,-1};
//int Dy[]={-1,-2,2,1,-2,-1,1,2};
int dx[]= {-1,1,0,0};
int dy[]= {0,0,-1,1};
//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//////////////////////////////////////////////////////////////////////////////

string ar[111];
int main()
{
    string s;
    cin>>s;
    int n;
    S(n);

        int fl=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        string t="";
        t+=ar[i];
        t+=ar[i];

        for(int j=0;j<t.size()-1;j++)
        {
            if(fl)break;
            if(t[j]==s[0] && t[j+1]==s[1])fl=1;
        }
    }

    if(fl)
    {
        printf("YES\n");
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string t="";
            t+=ar[i];
            t+=ar[j];


            for(int k=0;k<t.size()-1;k++)
            {
                if(fl)break;
                if(t[k]==s[0] && t[k+1]==s[1])fl=1;
            }

            if(fl)break;
        }
        if(fl)break;
    }

    if(fl)printf("YES\n");
    else printf("NO\n");

    return 0;
}
